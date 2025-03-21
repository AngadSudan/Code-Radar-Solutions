#include <stdio.h>
#include <string.h>

void main(){
    char ch[199];
    fgets(ch,sizeOf(ch),stdin);

    int counter=1;
    for(int i=0;i<strlen(ch);i++){
        if(ch[i]==' ' || ch[i]=='\n'){
            counter++;
        }
    }
    printf("%d",counter);
}