#include<stdio.h>
int main() {
char str[30];
printf("\n enter the first string");
scanf("%s",str);
int length;
for (length = 0; str[length] != '\0'; length++);
int i = length - 1;
for (int j = 0; j < length / 2; j++) {
char temp = str[j];
str[j] = str[i];
str[i] = temp;
i--;
}
printf("\nThe reverse of the string: ");
puts(str);
return 0;
}

