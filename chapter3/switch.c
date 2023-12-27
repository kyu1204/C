#include <stdio.h>

int main(void)
{
  int tv_channel = 11;

  switch (tv_channel)
  {
  case 11:
    printf("MBC\n");
    break;
  case 1:
    printf("외계방송\n");
    break;
  case 2:
    printf("또 다른 외계방송\n");
    break;
  case 5:
    printf("SBS \n");
    break;
  }

  return 0;
}
