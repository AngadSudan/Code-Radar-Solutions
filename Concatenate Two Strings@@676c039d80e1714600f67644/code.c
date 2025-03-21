#include <stdio.h>
#include <string.h>
void remove_space(char ch[]){
    int n= strlen(ch);
    if(n>0 && ch[n-1]=='\n'){
        ch[n-1]='\0';
    }
}
void main(){
    char ch1[100];
    char ch2[100];
    char ans[300];
    fgets(ch1,sizeof(ch1),stdin);
    fgets(ch2,sizeof(ch2),stdin);
    remove_space(ch1);
    remove_space(ch2);
    
    strcpy(ans,ch1);
    strcat(ans,ch2);
    printf("%s",ans);
}