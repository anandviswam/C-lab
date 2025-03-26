#include<stdio.h>
int array_sum(int arr[],int limit){
int s=0;
for(int i=0;i<limit;i++){
   s=s+arr[i];
   }
return s;
}
int main(){
int limit;
printf("enter the limit");
scanf("%d",&limit);
int arr[limit];
printf("enter the array elements");
for(int i=0;i<limit;i++){
scanf("%d",&arr[i]);
}
printf("the sum is:%d",array_sum(arr,limit));
return 0;
}
   

