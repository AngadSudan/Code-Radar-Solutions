#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int age, citizen;
    scanf("%d %d",&age, &citizen);

    if(age>18 && citizen==1){
        printf("Eligible");
    }else{
        printf("Not Eligible");
    }
    return 0;
}