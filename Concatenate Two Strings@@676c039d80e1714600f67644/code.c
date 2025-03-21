#include <stdio.h>
#include <string.h>

void main(){
    char ch1[100];
    char ch2[100];
    char ans[300];
    fgets(ch1,sizeof(ch1),stdin);
    fgets(ch2,sizeof(ch2),stdin);
    
    strcpy(ans,ch1);
    strcat(ans,ch2);
    printf("%s",ans);
}