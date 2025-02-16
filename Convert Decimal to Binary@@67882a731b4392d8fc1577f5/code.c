#include <stdio.h>

int pow(int a, int b){
    int prod=1;
    for(int i=0;i<b;i++){
        prod*= a;
    }
    return prod;
}
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
