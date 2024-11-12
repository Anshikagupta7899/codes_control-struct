//print prime factors of given number.
#include <stdio.h>
void main()
{
  int num,i;
  printf("Enter the number:");
  scanf("%d",&num);
  printf("prime factors are:");
  for(i=2;i<num;i++)
  {
    if(num%i==0)
    {
      printf("%d\n",i);
      }
    }
}
