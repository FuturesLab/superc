#ifdef A
float x(a, b)
  float a;
  float b;
{
  return a * b;
}
#else
char x(y) 
  int y;
{
  return y;
}
#endif

int main() {
  x(3.2, 4.0);
  return 0;
}
