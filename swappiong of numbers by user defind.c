#include<stdio.h>
void main()
{
int a,b;

printf("enter\n");
scanf("%d,%d",&a,&b);


printf("numbers before swapping a=%d,b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("swapped numbers are a=%d,b=%d \n",a,b);
}
