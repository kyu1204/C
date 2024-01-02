#include <stdio.h>

int callMenu(void)
{
  int choice = 0;
  printf("\n무엇을 선택하시겠습니까?\n");
  printf("성적입력(1),종료(2)\n:");
  scanf("%d", &choice);

  return choice;
}
int temp(void)
{
  int c = 0;
  printf("성적을 입력하시오.(음수 입력 시 점수 입력 종료)\n:"); // 음수 입력 시 종료되는 설명추가
  scanf("%d", &c);
  return c;
}

int main()
{
  // main함수의 지역변수
  int score[30] = {0};
  int score_index[30] = {0};

  int index = 0;
  int temp_1 = 0; // 정렬
  int flag = 1;   // while 종료

  do
  {
    switch (callMenu())
    {
    case 1:
      index = -1;
      for (int i = 0; i < 30; i++)
      {
        if (score_index[i] == 0)
        {
          index = i;
          break;
        }
      }

      if (index < 0)
      {
        printf("더이상 저장할수 없습니다.\n");
        flag = 0; // while 종료되도록 flag 설정
        break;
      }

      int scoreInput = 0;
      scoreInput = temp();
      if (scoreInput >= 0 && scoreInput <= 100)
      {
        score[index] = scoreInput;
        score_index[index] = 1;
      }
      else if (scoreInput < 0)
      {
        printf("음수일경우 ");
        flag = 0;
      }
      else
      {
        printf("0~100의 숫자만 입력할 수 있습니다.\n");
      }

      break;

    case 2:
      printf("수고하셨습니다.\n");
      flag = 0;
      break;

    default:
      printf("잘못 입력하셨습니다.\n");
      break;
    }
  } while (flag);
  printf("서비스를 종료합니다.\n");

  for (int i = 0; i < 30; i++)
  {
    for (int j = 0; j < 30; j++)
    {
      if (score[i] > score[j])
      {
        temp_1 = score[i];
        score[i] = score[j];
        score[j] = temp_1;
      }
    }
  }

  for (int i = 0; i < 5; i++)

    if (score_index[i] == 1)
    {
      printf("%d.| %d점 등급:A\n", i, score[i]);
    }

  for (int i = 5; i < 15; i++)

    if (score_index[i] == 1)
    {
      printf("%d.| %d점 등급:B\n", i, score[i]);
    }

  for (int i = 15; i < 25; i++)

    if (score_index[i] == 1)
    {
      printf("%d.| %d점 등급:C\n", i, score[i]);
    }

  for (int i = 25; i < 30; i++)

    if (score_index[i] == 1)
    {
      printf("%d.| %d점 등급:F\n", i, score[i]);
    }
  return 0;
}
