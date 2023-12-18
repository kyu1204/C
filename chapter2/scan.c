#include <stdio.h>

int main() {
  int a;
  int b;

  printf("첫 번째 값을 입력해주세요: ");
  scanf("%d", &a);

  printf("두 번째 값을 입력해주세요: ");
  scanf("%d", &b);

  int result = a + b;

  printf("a + b = %d\n", result);

  return 0;
}
