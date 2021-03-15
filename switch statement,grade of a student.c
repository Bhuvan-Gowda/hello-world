#include<stdio.h>
void main()
{
char ch,grade;
printf("\n enter a grade");
scanf("%c",&grade);
switch(grade)
{
case'o':
        printf("\n outstanding");
        break;
case'a':
        printf("\n excellent");
         break;
case'b':
        printf("\n good");
        break;
case'c':
        printf("\n satisfactionary");
        break;
case'd':
        printf("\n fail");
        break;
default:
        printf("\n invalid grade");
        break;
}
}
