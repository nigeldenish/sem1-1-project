//c structures
#include <stdio.h>
#include <string.h>

struct student {
    char name [30];
    float height;
    char reg_no[15];
    char email[30];
    int phone;

} student1,student2;

int main (){
//struct student student1,student2;
//strcpy(student.name);
printf("Enter the name of student 1:");
scanf("%s",&student1.name);

printf("Enter the name of student 2:");
scanf("%s",&student2.name);

printf("Name: %s \n",student1.name);
printf("Name 2: %s \n",student2.name);

//strcpy(student.email);
printf("Enter the email of student 1:");
scanf("%s",&student1.email);
printf("Enter the email of student 2:");
scanf("%s",&student2.email);

printf("email: %s \n",student1.email);
printf("email 2: %s \n",student2.email);

//student.height;
printf("Enter the height of student 1:");
scanf("%f",&student1.height);
printf("Enter the the height of student 2:");
scanf("%f",&student2.height);

printf("height: %f \n",student1.height);
printf("height 2: %f \n",student2.height);

//strcpy(student.reg_no);
printf("Enter the student1.reg_no:");
scanf("%s",&student1.reg_no);
printf("Enter the student2.reg_no:");
scanf("%s",&student2.reg_no);

printf("reg_no 1: %s \n",student1.reg_no);
printf("reg_no 2: %s \n",student2.reg_no);

//student.phone
printf("Enter the student 1 phone:");
scanf("%d",&student1.phone);
printf("Enter the student 2 phone:");
scanf("%d",&student2.phone);

printf("phone 1: %d \n",student1.phone);
printf("phone 2: %d \n",student2.phone);

printf("Name:%s\n",student1.name);
printf("Name 2:%s\n\n",student2.name);
printf("Email 1:%s\n",student1.email);
printf("Email 2:%s\n\n",student2.email);
printf("Height:%f\n",student1.height);
printf("Height 2:%f\n\n",student2.height);
printf("Reg_no 1:%s\n",student1.reg_no);
printf("Reg_no 2:%s\n\n",student2.reg_no);
printf("phone 1:%d\n",student1.phone);
printf("phone 2: %d\n",student2.phone);

return 0;
}
