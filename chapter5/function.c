#include <stdio.h>

void add_print(int n1, int n2)
{
  // printf("두 수의 합은 %d입니다.\n", n1 + n2);
  int r = n1 + n2;

  printf("두 수의 합은 %d입니다.\n", r);
}

void print_hello(void);
int *int_array(int arr[]);

int main(void)
{
  int num1 = 0;
  int num2 = 0;
  int result = 0;

  printf("첫번째 숫자를 입력하세요: ");
  scanf("%d", &num1);
  printf("두번째 숫자를 입력하세요: ");
  scanf("%d", &num2);

  add_print(num1, num2);

  print_hello();

  return 0;
}

// {return type} {function name} ({전달받는 값 type 변수}, ....)
// {
//   return {return 위에 선언한 return type에 맞는 value}
// }

void print_hello(void)
{
  printf("Hello World!\n");
}

// 배열을 함수로 전달하고 전달 받고 싶을 때
int *int_array(int arr[])
{
  int num[10] = {0};

  return num;
}
