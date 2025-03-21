#include <stdio.h>
#include <string.h>

int palindrome(char ch[]){
    int start=0;
    int end= strlen(ch)-1;
    while(start<end){
        if(ch[start]!=ch[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
void main(){
    char ch[100];
    scanf("%s",ch);
    printf("%s", palindrome(ch)==0?"No":"Yes");
}
