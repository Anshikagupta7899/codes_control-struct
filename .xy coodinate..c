// Write a program to accept a coodinate point in a XY coordinate system and determine in which
//quadrant the coodinate point lies.
#include <stdio.h>
void main()
{
  int X,Y;
  //char s1,s2;
  //printf("Enter the sign of X:");
  //scanf("%c",&s1);
  printf("Enter the coodinate in X:");
  scanf("%d",&X);
  //printf("Enter the sign of Y:");
  //scanf("%c",&s2);
  printf("Enter the coodinate in Y:");
  scanf("%d",&Y);
  if(X>=0 && Y>=0)
  {
     printf("%d%d is in 1st quadrant",X,Y);
  }
  else if(X<0 && Y>=0)
  {
      printf("%d%d is in 2nd quadrant");
  }
  else if(X<0 && Y<0)
  {
      printf("%d%d is in 3rd quadrant");
  }
  else if(X>=0 && Y<0)
  {
    printf("%d%d is in 3rd quadrant");
  }
  else if(X<0 && Y<0)
  {
     printf("%d%d is in 4th quadrant");
  }
  else
  {
     printf("INVALID INPUT");
  }
}
