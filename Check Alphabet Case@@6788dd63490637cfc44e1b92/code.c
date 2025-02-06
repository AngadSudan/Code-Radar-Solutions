#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c",&ch);
    if(ch>=65 && ch<=91 ){
        printf("Uppercase");
    }else if(ch>=97 && ch<=123){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
    // printf("%s", welcome());
    return 0;
}