#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float areaOfCircle(float r)
{
float a  = r*r*M_PI;

return(a); 
}

int main()
{
float i;
float j;
printf("enter lower value: ");
scanf("%f", &i);
printf("enter higher value: ");
scanf("%f", &j);

if(i > j)
{
printf("Please enter the lower and higher value correspondingly. Try Again. The program will now terminate\n");
}


for (float h = i; h < j; h+=0.1000000){
float poo = areaOfCircle(h);
printf ("The area is %f if the radius is %f\n", poo, h);

}


}

