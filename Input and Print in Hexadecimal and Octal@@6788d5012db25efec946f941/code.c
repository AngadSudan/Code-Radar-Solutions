#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d",&num);
    printf("Hexadeima: %x", num);
    printf("Octal: %o", num);
    return 0;
}