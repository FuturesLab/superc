struct one
{
  #ifdef A
  int a;
  #endif
  #ifdef B
  int b;
  #endif
};

struct two
{
  #ifdef C
  int a;
  int b;
  #else
  long long c;
  unsigned long long d;
  #endif
  struct one x;
};

int main()
{
  int z;
  z = sizeof(struct two);
  return 0;
}

  
