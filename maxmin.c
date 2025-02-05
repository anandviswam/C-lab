#include<stdio.h>
int main(){
    int num[10],n, largest=num[0],smallest=num[0],i;
    printf("enter no of element");
    scanf("%d",&n);
    for(i=0;i<n;i++){
      printf("enter the element");
      scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++){
      if( num[i]>largest){
      largest=num[i];
    }
    if (num[i]<smallest){
      smallest=num[i];
    }
    }
    printf("\n the largest no=%d",largest);
    printf("\n the smallest no=%d",smallest);
    return 0;
}
