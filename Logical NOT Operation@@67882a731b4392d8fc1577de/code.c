#include <stdio.h>
char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int ans= a>0;
    if(ans!=1){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}