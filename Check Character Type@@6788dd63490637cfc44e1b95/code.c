#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c",&a);
    int charvalue= (int) a;
    if((charvalue>=65 && charvalue<=91 ) || (charvalue>=97 && charvalue<= 123)){
        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U'){
            printf("Vowel");
        }else{
            printf("Consonant");
        }
    }else{
        if(a=='0' || a=='1' || a=='2' || a=='3' || a=='4' || a=='5' || a=='6' || a=='7' || a=='8' || a=='9'){
            printf("Digit");
        }else{
            printf("Special Character");
        }
    }
    return 0;
}