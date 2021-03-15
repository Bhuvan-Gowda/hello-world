#include<stdio.h>
void main()
{
int x,y;
printf("enter the values of x and y \n");
scanf("%d %d",&x,&y);
if(x==y)
{
printf("x is equal to y: %d==%d \n",x,y);
}
else if(x>y)
{
printf("x is greater than y: %d>%d \n",x,y);
}
else
{
printf("x is less than y: %d<%d \n",x,y);
}
}
