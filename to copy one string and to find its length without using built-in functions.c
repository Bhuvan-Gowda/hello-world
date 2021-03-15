#include<stdio.h>
int main()
{
char i,j,str[100],str1[100],length;
printf("enter the string n\n");
scanf("%s",str);
for(i=0;str[i]!=0;++i);
printf("string length is %d\n",i);
printf("*****copying str is str11*****\n");
for(j=0;str[j]!='\0';++j)
{
str1[j]=str[j];
}
str[j]='\0';
printf("str1 is %s",str1);
return 0;
}
