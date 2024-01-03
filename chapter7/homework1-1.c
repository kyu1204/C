#include <stdio.h>

#define USER 1
#define ADMIN 2
#define EXIT 3

struct Engine
{
  char name[20];
  int price;
};

struct Color
{
  char name[20];
  int price;
};

struct Model
{
  char name[20];
  int price;
  int colorCount;
  struct Color color[10];
};

int adminMenu(struct Model *models);

int main(void)
{

  int flag = 1;
  int choice = 0;
  int admin_choice = 0;
  int model_choice = 0;
  int color_choice = 0;

  int model_count = 0;

  int price = 0;

  struct Model models[10] = {0};

  while (flag)
  {
    printf("--- 메뉴 ---\n");
    printf("1. 포르쉐 만들기\n");
    printf("2. 관리자 모드\n");
    printf("3. 종료\n");
    printf("선택: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case USER:
      printf("--- 포르쉐 만들기--- \n");
      if (model_count <= 0)
      {
        printf("모델이 없습니다.\n");
        break;
      }

      printf("모델을 선택해주십시오.\n");
      for (int i = 0; i < model_count; i++)
      {
        printf("(%d)%s\n", i, models[i].name);
      }
      printf("선택: ");
      scanf("%d", &model_choice);

      price += models[model_choice].price;

      printf("price: %d\n", price);
      printf("colorCount: %d\n", models[model_choice].colorCount);
      if (models[model_choice].colorCount <= 0)
      {
        printf("색상이 없습니다.\n");
        break;
      }
      printf("색상을 선택하시오.\n");
      for (int i = 0; i < models[model_choice].colorCount; i++)
      {
        printf("(%d)%s\n", i, models[model_choice].color[i].name);
      }
      printf("선택: ");
      scanf("%d", &color_choice);
      price += models[model_choice].color[color_choice].price;

      break;
    case ADMIN:
      model_count += adminMenu(models);
      break;
    case EXIT:
      printf("종료\n");
      flag = 0;
      break;
    default:
      printf("잘못 입력하셨습니다.\n");
      break;
    }
  }

  printf("프로그램을 종료합니다.\n");
  return 0;
}

int adminMenu(struct Model *models)
{
  int flag = 1;
  int choice = 0;
  int index = 0;

  int option_choice = 0;
  struct Model model;

  while (flag)
  {
    printf("--- 관리자 모드 ---\n");
    printf("1. 모델 추가\n");
    printf("2. 돌아가기\n");
    printf("선택: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printf("--- 모델 추가 ---\n");
      printf("이름: ");
      scanf("%s", model.name);

      printf("가격: ");
      scanf("%d", &model.price);

      index++;

      int flag_1 = 1;
      int color_index = 0;
      while (flag_1)
      {
        printf("--- 옵션 추가 ---\n");
        printf("1. 색상 추가\n");
        printf("2. 종료\n");
        printf("선택: ");
        scanf("%d", &option_choice);
        switch (option_choice)
        {
        case 1:
          printf("--- 색상 추가 ---\n");
          printf("이름: ");
          scanf("%s", model.color[color_index].name);
          printf("가격: ");
          scanf("%d", &model.color[color_index].price);

          color_index++;
          break;
        case 2:
          flag_1 = 0;
          break;
        default:
          printf("잘못 입력하셨습니다.\n");
          break;
        }
      }

      model.colorCount = color_index;
      models[index] = model;
      break;
    case 2:
      flag = 0;
      break;
    default:
      printf("잘못 입력하셨습니다.\n");
      break;
    }
  }

  return index;
}
