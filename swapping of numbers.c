#include<stdio.h>
int main()
{
int a,b,D;
printf("type any two numbers \n");
scanf("%d,%d",&a,&b);
printf("numbers before swapping a=%d\tb=%d \n",a,b);
D=a;
a=b;
b=D;
printf("swapped numbers a=%d\tb=%d \n",a,b);
return 0;
}
