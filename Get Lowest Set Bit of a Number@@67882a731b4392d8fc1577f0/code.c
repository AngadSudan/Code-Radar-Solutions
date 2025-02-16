#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int bitmask= (num&-num);
    printf("%d",bitmask);
    return 0;
}