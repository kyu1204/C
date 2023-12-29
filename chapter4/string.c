#include <stdio.h>

int main(void)
{
  char name[] = "Hello World";
  // printf("%lu\n", sizeof(name) / sizeof(char));

  // printf("Enter your name: ");

  // 변수에 데이터를 입력 받을 때에는 &를 붙여준다.
  // 하지만 배열에 데이터를 입력 받을 때에는 &를 붙이지 않는다.
  // scanf("%s", name);

  printf("%s%s\n", name);

  return 0;
}