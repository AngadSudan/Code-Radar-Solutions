#include <stdio.h>

int main(){
    int n,digit;
    scanf("%d %d",&n,&digit);
    int bitmask= 1>>digit ^ n;
    printf("%d",bitmask);

    return 0;
}