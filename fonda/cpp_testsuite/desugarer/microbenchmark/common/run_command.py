import subprocess
import os

def run_command(args: str, stdin=subprocess.PIPE, env=os.environ, shell=False):
  res = subprocess.run(args, shell=shell, stdin=stdin, env=env, capture_output=True)
  return res.returncode, res.stdout, res.stderr
