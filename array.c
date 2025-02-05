#include<stdio.h>
int main(){
   int limit,i,n;
   printf("enter the no of limit: ");
   scanf("%d",&limit);
   int num[i];
   printf("enter %d elements",limit);
   for(i=0;i<limit;i++){
   scanf("%d",&num[i]);
   }
   printf("\n enter num you want to search");
   scanf("%d",&n);
   for(i=0;i<limit;i++){
      if(n==num[i]){
         printf("\n the position of %d",i+1);
      }
        
   }
   return 0;
}   
