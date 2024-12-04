//Army game.
#include <stdio.h>
int gameWithCells(int n, int m)
{
    return ((n+1)/2)*((m+1)/2);
}
int main()
{
 int r,c,z;
 printf("Enter the no. of rows: ");
 scanf("%d",&r);
 printf("Enter the no. of columns:");
 scanf("%d",&c);
 z=gameWithCells(r,c);
 printf("no. of packages required :%d",z);
 }
