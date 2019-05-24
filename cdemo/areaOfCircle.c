#include <stdio.h>
#include <math.h>

int main()
{
float r;
float a;

r = 3.5;
for (int i = 0; i < 10; i++)
{
a = r * r * M_PI;
printf("The area of a circle with the radius of %f is %f\n", r, a);

r = r + 1;
}}
