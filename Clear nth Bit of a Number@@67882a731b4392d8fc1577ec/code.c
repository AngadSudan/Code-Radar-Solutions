#include <stdio.h>

void main(){
    int n,digit;
    scanf("%d %d",n,digit);

    int bitmask= 1>>digit ^ n;
    printf("%d",bitmask);
}