#include<stdio.h>
int main(){
    char istring[200];
    int freq[26];
    print("\nenter the string");
    fgets(istring,sizeof(istring),stdin);
    for(int i=0;istring[i]!='\0';i++){
        char ch=istring[1];
        if(istring[i]>='A' and istring[i]<='Z' ){
        ch=ch+32;
        }
        if(ch>='a'&& ch<='z'){
            freq[ch-97]++;
        }
    }
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
         printf("%c:%d\n",i+97,freq[i]);
        }
    }
    
    return 0;
      
