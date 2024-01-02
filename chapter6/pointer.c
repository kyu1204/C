#include <stdio.h>

void func(char *type, int *ptr);

int main(void)
{
  int a = 10;
  int *b = &a;

  int c = *&a;

  printf("a의 값: %d\n", a);
  printf("a의 주소: %p\n", &a);

  printf("b의 값: %p\n", b);
  printf("b의 주소: %p\n", &b);

  printf("a의 값: %d\n", *b);

  printf("c의 값: %d\n", c);

  func("%d", &c);

  printf("c의 값: %d\n", c);

  return 0;
}

void func(char *type, int *ptr)
{
  *ptr = 20;
}
