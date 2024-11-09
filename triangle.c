//program to check triangle is equilateral ,isosecle or scalene.
#include <stdio.h>
void main()
{
float a,b,c;
printf("Enter the sides of triangle respectively :\n ");
printf("Side a:\n");
scanf("%f",&a);
printf("Side b:\n");
scanf("%f",&b);
printf("Side c:\n");
scanf("%d",&c);
if((a==b)&&(b==c))
{
  printf("triangle is equilateral");
}
else if((a==b)||(b==c))
{
  printf("Triangle is isoceles");
}
else
{
printf("Triangle is scalene");
}
}
