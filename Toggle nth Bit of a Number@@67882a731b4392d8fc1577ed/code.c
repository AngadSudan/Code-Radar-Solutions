#include <stdio.h>

int main(){
    int num,digits;
    scanf("%d %d",&num,&digits);

    int bitmask= (1<<digits);
    printf("%d",(bitmask ^ num));

    return 0;
}