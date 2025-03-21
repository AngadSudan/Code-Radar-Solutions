#include <stdio.h>
void main(){
    char ch[100];
    scanf("%s",&ch);

    int start=0;
    int end= ch.length();
    while(start<end){
        char temp= ch[start];
        ch[start]=ch[end];
        ch[end]=temp;
        start++;
        end--;
    }

    printf("%s",ch);
}