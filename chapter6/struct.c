// #include <stdio.h>

// struct Car
// {
//   int doorCount;
//   char engine[20];
//   char brand[20];
//   char color[20];
// };

// int main()
// {
//   struct Car bmw_m4 = {
//       2,
//       "BMW",
//       "Black",
//       "V8",
//   };

//   printf("Door count: %d\n", bmw_m4.doorCount);
//   printf("Engine: %s\n", bmw_m4.engine);
//   printf("Brand: %s\n", bmw_m4.brand);
//   printf("Color: %s\n", bmw_m4.color);

//   return 0;
// }

#include <stdio.h>

struct User
{
  char id[20];
  char password[20];
  char name[20];
};

struct Server
{
  char name[20];
  char channel[2];
  int maxUserCount;
};

struct Character
{
  char name[20];
  int level;
  int hp;
  int mp;
  int str;
  int dex;
  int luk;
  int intt;

  struct Server server;
  struct User user;
};

int main(void)
{
  struct Server scania = {
      "스카니아",
      {1, 2},
      10,
  };

  struct Server bera = {
      "베라",
      {1, 2},
      10,
  };

  struct User user_table[10];
  int user_table_index[10] = {0};

  printf("메뉴를 입력하세요");
  /*
  메뉴 화면

  회원가입

  서버선택
  struct Server server = selectServer();

  케릭터 생성
  struct Character character = createCharacter(server, user);
  */
}

void signup(struct User *user_table, int *user_table_index)
{
  int index = -1;
  for (int i = 0; i < 30; i++)
  {
    if (user_table_index[i] == 0)
    {
      index = i;
      break;
    }
  }
  if (index < 0)
  {
    printf("더이상 회원가입을 할 수 없습니다.\n");
    return;
  }

  struct User newUser;

  printf("회원가입\n");
  printf("아이디:");
  scanf("%s", newUser.id);
  printf("비밀번호:");
  scanf("%s", newUser.password);
  printf("이름:");
  scanf("%s", newUser.name);

  user_table[index] = newUser;

  printf("회원가입이 완료되었습니다.\n");
}