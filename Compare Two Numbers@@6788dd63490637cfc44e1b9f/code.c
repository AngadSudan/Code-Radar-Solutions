#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num1,num2;
    scanf("%d %d", &num1, &num2);

    if(num1>num2){
        printf("First");
    }else if(num1==num2){
        printf("Equal");
    }else{
        printf("Second");
    }
    return 0;
}