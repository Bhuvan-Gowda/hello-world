#include<stdio.h>
#include<math.h>
float average_of_three_integers(float,float,float);
int main()
{
float a,b,c,x;
printf("\n enter three integers");
scanf("%f %f %f",&a,&b,&c);
x=average_of_three_integers(a,b,c);
printf("\n average of three numbers=%f",x);
return 0;
}
float average_of_three_integers(float a,float b,float c)
{
float x;
x=(a+b+c)/3.0;
printf("average=%f",x);
return x;
}
