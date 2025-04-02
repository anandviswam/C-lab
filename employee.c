#include<stdio.h>
struct employe{
char name[10];
int id;
float salary;
};
int main(){
int n;

printf("enter the limit");
scanf("%d",&n);
struct employe s[n];
for(int i=0;i<n;i++){
printf("\n enter the name");
scanf("%s",s[i].name);
printf("\n enter the id");
scanf("%d",&s[i].id);
printf("\n enter the salary");
scanf("%f",&s[i].salary);
printf("\n enter the employe details");
}
for(int i=0;i<n;i++){
printf("\n name:%s",s[i].name);
printf("\n id:%d",s[i].id);
printf("\n salary:%f",s[i].salary);
return 0;
}
}

