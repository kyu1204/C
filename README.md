# C 언어 강의
## MINTUDY Project

# Intro
## Requirement
1. 에디터 셋업 (vscode)
	1. vscode 설치방법
		1. https://code.visualstudio.com/
2. 디버거 셋업 (vscode extension)
	1. vscode gcc extension 설치
		1. c/c++
		2. c/c++ extension
		3. code runner
## Hello World
1. Hello World 작성
```c
#include <stdio.h>

int main() {
	printf("Hello World!");
	return 0;
}
```
# Variable
## What is variable or constant?
1. variable
```c
#include <stdio.h>

int main() {
	int a = 10;
	int b = 20;
	printf("%d + %d = %d", a, b, a+b);

	return 0;
}
```
2. constant
```c
#include <stdio.h>

#define MAX_NUM 10

int main() {
	int a = MAX_NUM;
	const b = 20;
	b = 1;  // error

	printf("%d + %d = %d", a, b, a+b);
	return 0;
}
```
## Type
1. `int`
2. `unsigned int`
3. `long`
4. `short`
5. `float`
6. `double`
7. `char`
8. `boolean`
```c
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

```
# Operation
## basic operation
1. `+`
2. `-`
3. `*`
4. `/`
5. `% (나머지)`
## increase, decrease operation
1. `++`
2. `--`
## compare operation
1. `>, <`
2. `>=, <=`
3. `== , !=`
## bit operation
1. `& (AND)`
2. `| (OR)`
3. `>>, << (Shift)`
4. `^ (XOR)`
## complex assignment operation
1. `+=`
2. `-=`
3. `*=`
4. `/=`
5. `%=`
# Print and Scan
## Printf
1. printf
2. 줄바꿈
3. %d4
## Scanf
1. scanf
	1. &변수이름
# Conditional
## if
1. `if`
2. `else if`
3. `else`
## switch
1. `switch and case`
2. `break`
# Loop
## while
1. `while`
2. `do while`
## for
1. `for`
# Array
## one dimension array
1. `[]`
## String
1. `char array`
2. `null 문자`
## two dimension array
1. `[][]`
# Function
## basic function
1. return type, name, parameters
```c
void myFunction() {
	print("This is my function!");
}
```
2. variable lifecycle
# struct
## basic struct
1. struct
```c
struct book {
	int id;
	char name[30];
	price int;
}
```
# Pointer
## What is the Pointer?
- 주소 값을 저장하는 변수
- 32bit 아키텍쳐 기준 포인터 변수가 할당하는 저장공간 크기는 4byte
	- 64bit 는 8byte
- 각 메모리 1칸은 1byte
## memory map
![memory map](https://blog.kakaocdn.net/dn/beCUTJ/btqURvZeZOL/qljL316sxeGux63nXoXPIk/img.png)
## How to use the Pointer?
1. pointer
```c
#include <stdio.h>

int main() {
	int a = 10;
	int *b = &a;

	printf("a: %d\n", a);
	printf("b: %p\n", b);
	printf("b value: %d\n", *b);
}
```
2. double pointer
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a = 10;
  int *aa = &a;

  printf("%p\n", aa);
  printf("%d\n", *aa);

  int *aaa = malloc(sizeof(int));

  *aaa = 10;
  printf("%p\n", aaa);
  printf("%d\n", *aaa);

  free(aaa);

  int *bb = malloc(sizeof(int) * 10);

  for (int i = 0; i < 10; i++)
  {
    bb[i] = i;
    printf("%d\n", bb[i]);
  }

  int **bbb = &bb;

  printf("%p\n", bb);
  printf("%p\n", bbb);

  printf("%p\n", &bb[1]);
  printf("%p\n", ++*bbb);

  free(bb);

  return 0;
}
```
## array struct
- 배열은 연속된 저장공간을 가짐
	- int a[4] = 4byte x 4 만큼의 공간을 차지함
	- a 변수는 해당 배열이 시작되는 첫번째 주소 값을 가지는 포인터 변수
	- 주소값이 1000 -> 시작된다면 a 는 1000이라는 주소 값을 가지고 있음.
	- a[index] = a 가 가지고 있는 주소 값 + 타입 별 크기
		- int 형일 때 (int = 4byte)
		- a[0] = 1000 + 0
		- a[1] = 1000 + 4 x 1 = 1004
		- a[2] = 1000 + 4 x 2 = 1008
# Heep
## malloc
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
	int *a = malloc(sizeof(int));

	return 0;
}
```
