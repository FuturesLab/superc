from common.run_command import run_command
import os
import configparser
import shutil
import sys
from tools.utils import log_docker_not_found
from tools.utils import log_docker_name_conflict
class Tool:

  def __init__(self):
    tool_dir = os.path.dirname(__file__)
    config = configparser.ConfigParser()
    config.read(os.path.join(tool_dir, 'Hercules.config'))

    self.working_dir = config.get('paths', 'workingDir')

    if os.path.exists(self.working_dir):
      shutil.rmtree(self.working_dir)
    os.mkdir(self.working_dir)
    
    self.test_dir = os.path.join(self.working_dir, 'test')

    self.start_docker()


  def run(self, testcase: str):
    '''files in test and ifdeftoif folders are created by docker,
    so remove them with docker to avoid permission issue'''
    if os.path.exists(self.test_dir):
      self.rm_by_docker(self.test_dir)
    os.mkdir(self.test_dir)

    ifdeftoif_dir = os.path.join(self.working_dir, 'ifdeftoif')
    if os.path.exists(ifdeftoif_dir):
      self.rm_by_docker(ifdeftoif_dir)

    file_name = os.path.basename(testcase)
    copied_test = os.path.join(self.test_dir, file_name)
    shutil.copy2(testcase, copied_test)

    os.chdir(self.test_dir)

    args = ['docker', 
                'exec', 
                'hercules',
                'bash',
                '-c',
                f'"cd {self.test_dir} && /src/Hercules/ifdeftoif.sh {copied_test}"'
                ]
    hercules_code, _, _ = run_command(' '.join(args), shell=True)

    ifdeftoif_file_name = file_name.replace('.c', '_ifdeftoif.c')
    ifdeftoif_file_path = os.path.join(self.test_dir, ifdeftoif_file_name)

    if not os.path.exists(ifdeftoif_file_path):
      return 1

    gcc_args = ['gcc', '-x', 'c', '-c', '-o', '/dev/null', ifdeftoif_file_path]
    gcc_ret, _, _ = run_command(gcc_args)

    return gcc_ret


  def clean(self):
    shutil.rmtree(self.working_dir)
    self.stop_docker()


  def start_docker(self):
    image_name = 'hercules'
    '''Hercules uses absolute path for inclusion, so 
    make host and container paths identical here'''
    '''specifying user here will break Hercules, 
    so we have to remove files created by docker 
    with rm command inside the container'''
    args = ['docker', 
                'run',
                '-dt',
                '--rm',
                '--name=hercules',
                '-v',
                f'{self.working_dir}:{self.working_dir}',
                image_name,
                'bash'
                ]
    _, _, err = run_command(args)

    tool_name = os.path.basename(os.path.dirname(__file__))
    if b'Unable to find image' in err:
      log_docker_not_found(image_name, tool_name)
      self.clean_and_exit(1)

    if b'is already in use by container' in err:
      log_docker_name_conflict('hercules', tool_name)
      self.clean_and_exit(1)


  def stop_docker(self):
    args = ['docker', 'stop', 'hercules']
    run_command(args)


  def clean_and_exit(self, code):
    self.clean()
    sys.exit(code)


  def rm_by_docker(self, path):
    rm_args = ['docker',
                  'exec', 
                  'hercules',
                  'rm',
                  '-rf',
                  path
                  ]
    run_command(rm_args)
    
