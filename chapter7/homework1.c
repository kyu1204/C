#include <stdio.h>

int case_choice(void)
{
  int choice = 0;
  printf("무엇을 선택하겠습니까?\n");
  printf("(1)포르쉐 만들기\n(2)관리자 모드\n(3)종료\n:");
  scanf("%d", &choice);
  return choice;
}

struct car
{
  char name;
  char engine[20];
  char color[20];
  char wheels[20];
};

int main()
{
  int index = 0;
  int flag = 1;
  int flag_1 = 1;
  int choice = 0; // 관리자 선택
  int model_choice = 0;
  int color_choice = 0;
  int engine_choice = 0;
  int wheels_choice = 0;
  int model_price = 0;
  int color_price = 0;
  int engine_price = 0;
  int wheels_price = 0;
  int price = 0;
  while (flag)
  {
    switch (case_choice())
    {

    case 1:
      printf("모델을 선택해주십시오.\n");
      printf("(1)taycan\n다른숫자를 입력시 처음 화면으로 가집니다.\n:");
      scanf("%d", &model_choice);

      {
        switch (model_choice)
        {
        case 1:
          model_price = 10000;
          printf("(taycan을 선택하셨습니다.)\n");
          printf("색상을 선택하시오\n(1)black (2)white)\n 다른숫자를 입력시 처음 화면으로 가집니다.\n:");
          scanf("%d", &color_choice);
          switch (color_choice)
          {
          case 1:
            color_price = 1000;
            printf("black을 선택하셨습니다.\n");
            printf("engine을 선택하시오.\n (1)turbo\n 다른숫자를 입력시 처음 화면으로 가집니다.\n:");
            scanf("%d", &engine_choice);
            switch (engine_choice)
            {
            case 1:
              engine_price = 5000;
              printf("turbo를 선택하셨습니다.\n");
              printf("wheels을 선택하시오.\n (1)nomal (2)steel\n 다른숫자를 입력시 처음 화면으로 가집니다.\n:");
              scanf("%d", &wheels_choice);
              switch (wheels_choice)
              {
              case 1:
                wheels_price = 7000;
                printf("nomal을 선택 하셨습니다.\n 선택이 완료하였습니다.\n");

                break;

              case 2:
                wheels_price = 8000;
                printf("steel을 선택 하셨습니다.\n 선택을 완료하였습니다.\n");
                break;
              }
              break;
            default:
              break;
            }
            break;

          case 2:
            color_price = 2000;
            printf("White를 선택하셨습니다.\n");
            printf("engine을 선택하시오.\n (1)turbo\n 다른숫자를 입력시 처음 화면으로 가집니다.\n:");
            scanf("%d", &engine_choice);
            switch (engine_choice)
            {
            case 1:
              engine_price = 5000;
              printf("turbo를 선택하셨습니다.\n");
              printf("wheels을 선택하시오.\n (1)nomal (2)steel\n 다른숫자를 입력시 처음 화면으로 가집니다.\n:");
              scanf("%d", &wheels_choice);
              switch (wheels_choice)
              {
              case 1:
                wheels_price = 7000;
                printf("nomal을 선택 하셨습니다.\n 선택이 완료하였습니다.\n");
                break;
              case 2:
                wheels_price = 8000;
                printf("steel을 선택 하셨습니다.\n 선택을 완료하였습니다.\n");
                break;
              }
              break;
            default:
              break;
            }
          default:
            break;
          }

          break;

        default:
          break;
        }
      }
      break;
    case 2:
      while (flag_1)
      {
        printf("관리자 모드입니다.\n");
        printf("(1)선택한 금액 조회 (2)선택한 차량옵션\n:");
        scanf("%d", &choice);
        if (choice = 1)
        {
          price = model_price + color_price + engine_price + wheels_price;
          printf("%d원입니다.", price);
        }
      }
      if (choice = 2)
      {
        flag_1 = 0;
        break;
      }
    case 3:
      flag_1 = 0;
      break;

    default:
      printf("잘못입력하셨습니다.\n");
      break;
    }
  }
  price = model_price + color_price + engine_price + wheels_price;
  printf("서비스를종료합니다.\n");
  printf("가격은%d입니다.", price);
}
