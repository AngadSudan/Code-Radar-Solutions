#include <stdio.h>
#include <string.h>

void main(){
    char ch[100];
    scanf("%c",ch);
    char word,replace;
    scanf("%c",&word);
    scanf("%c",&replace);

    for(int i=0;i<strlen(ch);i++){
        if(ch[i]==word){
            ch[i]=replace;
        }
    }
    printf("%s",ch);
}