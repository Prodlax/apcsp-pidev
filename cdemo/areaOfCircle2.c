#include <stdio.h>
#include <math.h>


float areaOfCircle(float r)
{
float a  = r*r*M_PI;

return(a); 
}

int main()
{
float i;
printf("enter radius: ");
scanf("%f", &i);

{
float poo = areaOfCircle(i);
printf ("The area is %f if the radius is %f\n", poo, i);
}

}
