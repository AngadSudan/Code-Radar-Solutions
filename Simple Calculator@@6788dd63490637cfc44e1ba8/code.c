#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num1,num2;
    char sign;
    scanf("%d %d %c",&num1,&num2,&sign);

    switch(char sign){
        case '+':
            printf("%d",num1+num2);
            break;
        case '-':
            printf("%d",num1-num2);
            break;
        case '*':
            printf("%d",num1*num2);
            break;
        case '/':
            printf("%d",num1/num2);
            break;
        default:
            printf("error");
    }
    return 0;
}