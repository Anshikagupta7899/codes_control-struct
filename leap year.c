//check whether the year input by user is leap year or not
#include<stdio.h>
void main()
{
   int year;
   printf("Enter the year:");
   scanf("%d",&year);
   if(year%400==0)
   {
       printf("%d is leap year",year);
   }
   else if(year%100!=0)
   {
       printf("%d is leap year",year);
   }
   else if(year%4==0)
   {
       printf("%d is leap year",year);
   }
   else
   {
       printf("%d  is  not leap year");
   }
}
