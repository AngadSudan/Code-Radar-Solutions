#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int month;
    scanf("%d",&month);

    if(month>12){
        printf("Invalid month");
    }else{
        if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
            printf("31");
        }else if(month==2){
            printf("28");
        }else{
            printf("30");
        }
    }
    return 0;
}