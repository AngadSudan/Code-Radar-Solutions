#include <stdio.h>

void main(){
    int num;
    scanf("%d",&num);

    int sum=0;
    while (num != 0) {
        sum += (1 << (num * 2));  
        num >>= 1;
    }
    printf("%d",sum);
    return 0;
}
