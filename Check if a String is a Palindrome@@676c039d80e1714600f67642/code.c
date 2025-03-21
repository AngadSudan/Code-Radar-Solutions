#include <stdio.h>
#include <string.h>

int palindrome(char ch[]){
    int start=0;
    int end= strlen(ch);
    while(start<end){
        if(ch[start]!=ch[end]){
            return 0;
        }
    }
    return 1;
}
void main(){
    char ch[100];
    scanf("%s",ch);
    printf("%s", palindrome==0?"No":"Yes");
}
