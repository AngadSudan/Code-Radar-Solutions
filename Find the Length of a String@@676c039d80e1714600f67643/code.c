#include <stdio.h>
#include <string.h>

void main(){
    char ch[100];
    getch(ch,sizeof(ch),stdin);
    
    printf("%d",strlen(ch));
}