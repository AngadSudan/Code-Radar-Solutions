#include <stdio.h>
#include <string.h>

void main(){
    char ch[199];
    scanf("%s",ch);

    int counter=0;
    for(int i=0;i<strlen(ch);i++){
        if(ch[i]==' '){
            counter++;
        }
    }
    printf("%d",counter);
}