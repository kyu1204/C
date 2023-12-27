#include <stdio.h>

int main(void)
{
  int a = 0;

  // while (a < 10 && a > 0)
  // {
  //   printf("%d\n", a);
  //   a += 2;
  // }

  // do
  // {
  //   printf("%d\n", a);
  //   // a += 2;
  // } while (a < 10 && a > 0);

  for (int index = 0; index < 10; index++)
  {
    printf("%d\n", index);
  }

  printf("end\n");

  return 0;
}
