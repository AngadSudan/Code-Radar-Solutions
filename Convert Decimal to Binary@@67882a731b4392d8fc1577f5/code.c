#include <stdio.h>
#include <math.h>

void main(){
    int num;
    scanf("%d",&num);

    int sum=0;
    while(num!=0){
        sum+= pow(2,(num<<1));
        num= num<<1;
    }
    printf("%d",sum);
    return 0;
}