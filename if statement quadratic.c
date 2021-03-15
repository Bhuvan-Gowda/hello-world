#include<stdio.h>
int main()
{
int a,b,c,D;
float x,y;
printf("enter the values of a,b,c \n");
scanf("%d,%d,%d",&a,&b,&c);
D=b*b-4*a*c;
k
if(D<0)
{printf("both roots are imaginary\n");
}

if(D==0)
{printf("both roots are equal\n");
x=-b/(2*a);
printf("root is %d\n");
}
if(D>o)
{printf("roots are real and distinct ")
x=(-b+sqrt(D)/(2*a));
y=(-b-sqrt(D)/(2*a));
printf("roots are: %f,%f",x,y);
}
return 0;
}
