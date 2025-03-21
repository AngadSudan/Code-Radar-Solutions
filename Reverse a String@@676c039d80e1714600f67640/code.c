#include <stdio.h>
#include <string.h>
void main(){
    char ch[100];
    scanf("%s",ch);

    int start=0;
    int end= strlen(ch)-1;
    while(start<end){
        char temp= ch[start];
        ch[start]=ch[end];
        ch[end]=temp;
        start++;
        end--;
    }
    printf("%s",ch);
}