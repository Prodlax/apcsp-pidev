#include <stdio.h>

int main()
{

  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

float d = 1.414;
float* prttod = &d;
float e = 3.912;
float* ptrtoe = &e;

  printf("float d is %d\n, located at %d\n", d, &d);
  printf("float e is %d\n, located at %d\n", e, &e);

float tmp = e;
	e = d;
	d = tmp;

printf("new d: %f\n", d);
printf("new e: %f\n", e);
}
