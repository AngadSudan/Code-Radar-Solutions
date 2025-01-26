#include <stdio.h>
#include <bool.h>
char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    bool ans= a>0;
    if(!ans){
        printf("False");
    }else{
        printf("True");
    }
    return 0;
}