// WAP to program to find out the area of largest possible rectangle which may enclosed compeletely within the circle of given radius.2r**
#include <stdio.h>
#include <math.h>
 void main()
 {
     int r,area;
     printf("Enter the radius:");
     scanf("%d",&r);
     area =2*pow(r,2);
     printf("The area of largest possible rectangle which may enclosed compeletely within the circle of given radius is:%d",area);
     }
