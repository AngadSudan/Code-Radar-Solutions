#include <stdio.h>
#include <string.h>

void main(){
    char ch1[100];
    char ch2[100];
    fgets(ch1,sizeof(ch1),stdin);
    fgets(ch2,sizeof(ch2),stdin);
    
    char ans[200]= ch1+ch2;
    // for(int i=0;i<strlen(ch1);i++){

    // }
    printf("%s",ans);
}