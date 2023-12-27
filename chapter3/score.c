#include <stdio.h>

#define KOREAN 1
#define ENGLISH 2

int main(void)
{
  int mode;
  int score;

  printf("------ 메뉴 ------\n");
  printf("언어를 고르세요\n");
  printf("1. 한국어\n");
  printf("2. 영어\n");
  printf(": ");
  scanf("%d", &mode);

  printf("점수를 입력하세요: ");
  scanf("%d", &score);

  switch (mode)
  {
  case KOREAN:
    if (90 <= score)
    {
      printf("수\n");
    }
    else if (80 <= score)
    {
      printf("우\n");
    }
    else if (70 <= score)
    {
      printf("미\n");
    }
    else
    {
      printf("양\n");
    }
    break;

  case ENGLISH:
    if (90 <= score)
    {
      printf("A\n");
    }
    else if (80 <= score)
    {
      printf("B\n");
    }
    else if (70 <= score)
    {
      printf("C\n");
    }
    else
    {
      printf("F\n");
    }
    break;

  default:
    printf("잘못된 메뉴 입니다!\n");
    break;
  }
}
