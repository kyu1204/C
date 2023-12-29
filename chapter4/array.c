#include <stdio.h>

int main(void)
{
  // int a = 10, 20, 30, 40, 50;
  int a[5] = {10, 20, 30, 40, 50};

  for (int i = 0; i < sizeof(a) / sizeof(int); i++)
  {
    printf("%d\n", add(a[i], 10));
  }

  // printf("%d\n", a[0]);
  // printf("%d\n", a[1]);
  // printf("%d\n", a[2]);
  // printf("%d\n", a[3]);
  // printf("%d\n", a[4]);

  return 0;
}
