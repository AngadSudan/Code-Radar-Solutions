#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d",&num);
    if(num%4==0){
        if(num%100==0 && num%400==0){
            printf("Leap Year");
        }else if(num%100==0 && num%400!=0){
            printf("Not a Leap Year");
        }else{
            printf("Leap Year");
        }
    }else{
        printf("Not a Leap Year");
    }
    return 0;
}