#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    num= (num&-num);
    printf("%d",num & num);
    return 0;
}