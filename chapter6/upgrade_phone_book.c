#include <stdio.h>

#define LIST 1     // 목록
#define REGISTER 2 // 등록
#define DELETE 3   // 삭제
#define UPDATE 4   // 수정
#define END 5      // 종료

struct Person
{
  char name[100];
  char number[100];
};

int main()
{
  int flag = 1;

  int choice;    // 첫번째 입력 (메뉴)
  int index = 0; // 네번째 입력 (순서)

  int phone_book_index[30] = {0};
  struct Person phone_book[1000000];

  while (flag)
  {
    printf("무엇을 하시겠습니까?\n");
    printf("목록(1),등록(2),삭제(3),수정(4),종료(5)\n\n");
    printf("선택:");
    scanf("%d", &choice);

    switch (choice)
    {
    case LIST:
      for (int i = 0; i < 30; i++)
      {
        if (phone_book_index[i] == 1)
        {
          printf("%d. %s | %s\n", i, phone_book[i].name, phone_book[i].number);
        }
      }

      break;
    case REGISTER:
      index = -1;

      // 빈 곳을 찾아내는 알고리즘
      for (int i = 0; i < 30; i++)
      {
        if (phone_book_index[i] == 0)
        {
          index = i;
          break;
        }
      }

      if (index < 0)
      {
        printf("더 이상 등록할 수 없습니다.\n");
        break;
      }

      printf("이름을 입력하시오\n");
      scanf("%s", phone_book[index].name);
      printf("전화번호를 입력하시오\n");
      scanf("%s", phone_book[index].number);

      phone_book_index[index] = 1;

      printf("등록이 완료되었습니다.\n\n");
      break;

    case DELETE:
      printf("삭제할 번호를 입력하시오\n");
      scanf("%d", &index);

      if (index < 0 || index >= 30)
      {
        printf("잘못된 번호입니다.\n");
        break;
      }

      phone_book_index[index] = 0;

      printf("삭제가 완료되었습니다.\n\n");
      break;
    case UPDATE:
      printf("수정할 번호를 입력하시오\n");
      scanf("%d", &index);
      if (index < 0 || index >= 30)
      {
        printf("잘못된 번호입니다.\n");
      }

      if (phone_book_index[index] == 0)
      {
        printf("수정할 연락처가 없습니다.\n");
        break;
      }

      printf("변경할 이름을 적으시오.\n");
      scanf("%s", phone_book[index].name);
      printf("변경할 번호를 적으시오.\n");
      scanf("%s", phone_book[index].number);
      break;
    case END:
      flag = 0;
      printf("서비스를 종료합니다\n");
      break;

    default:
      printf("잘못 입력하셨습니다.\n\n");
      break;
    }
  }

  printf("수고하셨습니다.\n");
  return 0;
}
