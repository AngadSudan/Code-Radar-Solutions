#include <stdio.h>
#include <string.h>

void main(){
    char ch[100];
    scanf("%s",ch);
    int vowels=0;
    for(int i=0;i<strlen(ch);i++){
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u'){
            vowels++;
        }
    }
    printf("%d",vowels);
}