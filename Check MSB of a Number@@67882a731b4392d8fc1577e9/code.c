#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    while(n>>1){
        n>>=1;
    }
    printf("%d", n);
    return 0;
}