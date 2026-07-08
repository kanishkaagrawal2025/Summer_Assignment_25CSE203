#include<stdio.h>
#include<string.h>

int main() {
    char s[100];
    int i,flag=1,len;

    gets(s);
    len=strlen(s);

    for(i=0;i<len/2;i++){
        if(s[i]!=s[len-1-i]){
            flag=0;
            break;
        }
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}