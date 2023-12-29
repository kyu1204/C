#include <stdio.h>

#define MONEY_INPUT_MENU 1
#define MONEY_OUTPUT_MENU 2
#define ACCOUNT_CHECK_MENU 3
#define EXIT_MENU 4

int main(void)
{
  int menu;             // a
  double account = 0.0; // b
  double amount = 0;    // c

  do
  {
    printf("무엇을 하시겠습니까?\n");
    printf("입금(1),출금(2),잔액확인(3),종료(4)\n");
    printf("선택: ");
    scanf("%d", &menu);

    switch (menu)
    {
    case MONEY_INPUT_MENU:
      printf("얼마를 입금하시겠습니까?\n");
      printf("금액: ");
      scanf("%lf", &amount);
      printf("%lf\n", amount);
      if (amount < 0)
      {
        printf("음수는 입력할 수 없습니다.\n\n");
      }
      else
      {
        account += amount; // 실제 잔고에 입금
        printf("입금이 완료되었습니다.\n\n");
      }
      break;
    case MONEY_OUTPUT_MENU:
      printf("얼마를 출금하시겠습니까?\n");
      printf("금액: ");
      scanf("%lf", &amount);
      if (amount < 0)
      {
        printf("음수는 입력할 수 없습니다.\n\n");
        break;
      }
      else if (account < amount)
      {
        printf("잔액이 부족합니다.\n\n");
        break;
      }
      else
      {
        account -= amount; // 실제 잔고에서 출금
        printf("출금이 완료 되었습니다.\n\n");
      }
      break;
    case ACCOUNT_CHECK_MENU:
      printf("잔액은 %lf 원 입니다.\n\n", account);
      break;
    case EXIT_MENU:
      printf("서비스를 종료합니다.\n");
      break;
    default:
      printf("잘못된 메뉴를 입력하셨습니다.\n\n");
      break;
    }
  } while (menu != EXIT_MENU);
  printf("수고하셨습니다.\n");
}
