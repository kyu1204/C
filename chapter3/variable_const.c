#include <stdio.h>

#define MAX_NUM 10

int main()
{
  int a = MAX_NUM;
  const int b = 20;
  // b = 1; // error

  printf("%d + %d = %d", a, b, a + b);
  return 0;
}
