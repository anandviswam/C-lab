#include<stdio.h>
struct student{
int roll_num;
char name[20];
float m1,m2,m3;
};
int main(){
int n;
printf("enter the number of students");
scanf("%d",&n);
struct student s[n];
for(int i=0;i<n;i++);
printf("\n enter the roll_num");
scanf("%d",&s[i].roll_num);
printf("\n enter the name");
scanf("%s",s[i].name);
printf("\n enter the mark1,mark2,mark3");
scanf("%f%f%f",&s[i].m1,&s[i].m2,&s[i].m3);
}
int avg=0,total=0;
for(int i=0;i<n;i++);
avg=(s[i].m1+s[i].m2+s[i].m3)/n;
total=s[i].m1+s[i].m2+s[i].m3;
}
printf(" the student details");
for(int i=0;i<n;i++);
printf("\n name:%s",s[i].name);
printf("\n roll_num:%d",s[i].roll_num);
printf("\n m1:%f \nm2:%f \nm3:%f",s[i].m1,s[i].m2,s[i].m3);
}
printf("the avg mark =%d and total=%d ",avg,total);

return 0;
}

