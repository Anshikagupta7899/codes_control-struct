//find the largest number among the three entered by the user.
#include <stdio.h>
int main()
{
  int num1,num2,num3;
  printf("Enter the number 1:");
  scanf("%d",&num1);
  printf("Enter the number 2:");
  scanf("%d",&num2);
  printf("Enter the number 3:");
  scanf("%d",&num3);
  if((num1>num2)&&(num1>num3))
  {
      printf("num1 is the largest%d",num1);}
  else if((num2>num1)&&(num2>num3))
  {
      printf("num2 is the largest%d",num2);}
  else
  {
      printf("num3 is largest %d",num3);} }
