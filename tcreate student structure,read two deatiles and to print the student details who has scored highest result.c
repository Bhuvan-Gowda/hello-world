#include<stdio.h>
int main()
{
struct student
{
int roll_no;
char name[20];
float fees;
char dob[20];
int result;
}stud1,stud2;

printf("\n roll_no of student1:");
scanf("%d",&stud1.roll_no);
printf("\n enter the name of student1:");
scanf("%s",&stud1.name);
printf("\n fees of student1:");
scanf("%f",&stud1.fees);
printf("\n dob of student1:");
scanf("%s",&stud1.dob);
printf("\n enter the result of student1:");
scanf("%d",&stud1.result);

printf("\n roll_no of student2:");
scanf("%d",&stud2.roll_no);
printf("\n enter the name of student2:");
scanf("%s",&stud2.name);
printf("\n fees of student2:");
scanf("%f",&stud2.fees);
printf("\n dob of student2:");
scanf("%s",&stud2.dob);
printf("\n enter the result of student2:");
scanf("%d",&stud2.result);

if(stud1.result>stud2.result)
{
printf("\n details of studemt1 is");
printf("\n roll_no=%d \n name=%s \n fees=%f \n dob=%s \n result=%d",stud1.roll_no,stud1.name,stud1.fees,stud1.dob,stud1.result);
}
else{

printf("\n details of studemt2 is");
printf("\n roll_no=%d \n name=%s \n fees=%f \n dob=%s \n result=%d",stud2.roll_no,stud2.name,stud2.fees,stud2.dob,stud2.result);
}
return 0;
}


