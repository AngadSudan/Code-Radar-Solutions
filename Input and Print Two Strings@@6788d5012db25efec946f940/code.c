#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch1[];
    char ch2[];
    scanf("%s",&ch1);
    scanf("%s",&ch2);
    printf("You entered: %s and %s", ch1,ch2);
    return 0;
}