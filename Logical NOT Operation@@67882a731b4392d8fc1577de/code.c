#include <stdio.h>
char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int ans= a>0;
    if(ans!=1){
        printf("False");
    }else{
        printf("True");
    }
    return 0;
}