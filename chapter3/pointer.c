#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a = 10;
  int *aa = &a;

  printf("%p\n", aa);
  printf("%d\n", *aa);

  int *aaa = malloc(sizeof(int));

  *aaa = 10;
  printf("%p\n", aaa);
  printf("%d\n", *aaa);

  free(aaa);

  int *bb = malloc(sizeof(int) * 10);

  for (int i = 0; i < 10; i++)
  {
    bb[i] = i;
    printf("%d\n", bb[i]);
  }

  int **bbb = &bb;

  printf("%p\n", bb);
  printf("%p\n", bbb);

  printf("%p\n", &bb[1]);
  printf("%p\n", ++*bbb);

  free(bb);

  return 0;
}