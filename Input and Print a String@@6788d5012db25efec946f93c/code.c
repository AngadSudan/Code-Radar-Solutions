#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ans[100];
    scanf("%s",&ans);
    printf("You entered: %s",ans);
    return 0;
}