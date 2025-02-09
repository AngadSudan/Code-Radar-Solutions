#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c",&a);
    if((a>=65 && a<=91 ) || (a>=97 && a>= 123)){
        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U'){
            printf("Vowel");
        }else{
            printf("Consonant");
        }
    }

    if((a-'a')>=0 && (a-'a')<=9){
        printf("Digit");
    }else{
        printf("Special Character");
    }
    return 0;
}