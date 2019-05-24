#include <stdio.h>
#include <math.h>


float areaOfCircle(float r)
{
float a  = r*r*M_PI;

return(a); 
}

int main()
{
for (float i = 3.5; i <= 12.5; i++)
{
float poo = areaOfCircle(i);
printf ("The area is %f if the radius is %f\n", poo, i);
}

}
