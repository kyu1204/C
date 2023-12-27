#include <stdio.h>
#include <stdbool.h> // C99

int main()
{
  int a = 10;          // -2147483648 ~ 2147483647
  unsigned int b = 20; // 0 ~ 4294967295
  short c = 32767;     // -32768 ~ 32767
  long d = 2;          // -2147483648 ~ 2147483647

  float e = 1.1;  // 1.17549e-38 ~ 3.40282e+38
  double f = 2.2; // 2.22507e-308 ~ 1.79769e+308

  char g = 'a';
  bool h = false; // true or false

  printf("%d\n", a);
  printf("%u\n", b);
  printf("%d\n", c);
  printf("%ld\n", d);

  printf("%f\n", e);
  printf("%lf\n", f);

  printf("%c\n", g);

  printf("%d\n", h);

  return 0;
}
