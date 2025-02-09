#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char sign;
    switch(sign){
        case 'R':
            printf("Stop");
            break;
        case 'G':
            printf("Go");
            break;
        case 'Y':
            printf("Slow Down");
            break;
        default:
            printf("Invalid input");
    }
    return 0;
}