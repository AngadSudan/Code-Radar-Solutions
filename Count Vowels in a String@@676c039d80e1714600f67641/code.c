#include <stdio.h>
#include <string.h>

void main(){
    char ch[100];
    scanf("%s",ch);
    int vowels=0;
    for(int i=0;i<strlrn(ch);i++){
        if(ch[100]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch=='u'){
            vowels++;
        }
    }
    printf("%d",vowels);
}