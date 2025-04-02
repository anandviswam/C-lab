#include<stdio.h>
struct student{
int roll_num;
char name[20];
float cgpa;
};
int main(){
struct student S1;
printf("enter the roll_num");
scanf("%d",&S1.roll_num);
printf("enter the name");
scanf("%s",S1.name);
printf("enter the cgpa");
scanf("%f",&S1.cgpa);
printf("\n enter the student details");
printf("\n name:%s",S1.name);
printf("\n roll_num:%d",S1.roll_num);
printf("\n cgpa:%f",S1.cgpa);
return 0;
}
