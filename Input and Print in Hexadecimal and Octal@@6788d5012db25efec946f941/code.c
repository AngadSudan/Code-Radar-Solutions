#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d",&num);
    printf("%x", num);
    printf("%o", num);
    return 0;
}