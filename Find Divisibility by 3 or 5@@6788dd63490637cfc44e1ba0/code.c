#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d",&num);

    if(num%5==0 && num%3==0){
        printf("Divisible by Both");
    }else if(num%5==0){
        printf("Divisible By 5");
    }else{
        printf("Divisible By 3");
    }
    return 0;
}