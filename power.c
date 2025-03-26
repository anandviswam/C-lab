#include<stdio.h>
int exponent(int n1, int n2){
if(n2==0){
return 1;
}
else{
return n1*exponent(n1,n2-1);
}
}s

int main() {
    int n1, n2, power;
    
    printf("Enter a number: ");
    scanf("%d", &n1);
    
    printf("Enter the exponent: ");
    scanf("%d", &n2);

    power = exponent(n1, n2);
    
    printf("%d raised to the power of %d is %d\n", n1, n2, power);
    
    return 0;
}


