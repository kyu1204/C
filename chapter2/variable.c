#include <stdio.h>
#include <stdbool.h>

#define MAX 100

int main(void)
{
    
    const int a = MAX;
    const int male = 1;

    int incress = 1;
    incress++;
    incress--;

    int b = 20;
    b++;

    int c = 30;
    c--;

    int d = --c;

    int e = b++;

    float result = (float) b /  c;

    bool cGd = c < d;

    int bit4 = 6;  // 11000
    int bit2 = 2;  // 0110
    int bitResult = bit4 << 2;

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("d = %d, e = %d\n", ++d, e++);
    printf("e = %d\n", e);
    printf("result: %f\n", result);

    printf("c < b: %d\n", cGd);

    printf("bitResult: %d\n", bitResult);

    return 0;
}
