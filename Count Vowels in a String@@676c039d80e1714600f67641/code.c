#include <stdio.h>
#include <string.h>

void main(){
    char ch[100];
    scanf("%s",ch);
    int vowels=0;
    for(int i=0;i<strlen(ch);i++){
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u'
            || ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U'
        ){
            vowels++;
        }
    }
    printf("%d",vowels);
}