#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c",&ch);
    if(ch>=65 && ch<=91 ){
        printf("Uppercase");
    }else{
        printf("Lowercase");
    }
    // printf("%s", welcome());
    return 0;
}