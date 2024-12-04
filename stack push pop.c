#include <stdio.h>
void push( int stack[],int top, int max_size, int item)
{
    if(top==max_size)
    {
        printf("Stack is overflow");
        return 0;
    }
    else
   {
       top++;
       stack[top]=item;
       return;
    }
}
int pop(int stack[],int top, int max_size)
    {
        if(top==0)
        {

            printf("Stack is underflow");
            return 0;
        }
        else
        {
            int temp =stack[top];
            top--;
            return temp;
        }
    }
    int main()
    {
        int stack[100]={0};
        int top=0;
        int a;
        printf("Enter the element to be pushed \n");
        scanf("%d",&a);
        push(stack,top,100,a);
        printf("pushed element is :");
        printf("%d",stack[1]);
        printf("\n------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("Name:Anshika gupta\n 2300320130055\n IT-A");
    }
