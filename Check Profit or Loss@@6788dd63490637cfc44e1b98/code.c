#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int amount1, amount2;
    scanf("%d %d",&amount1,&amount2);

    if(amount1-amount2 <0){
        printf("Profit");
    }else if(amount1-amount2==0){
        printf("No Profit No Loss");
    }else{
        printf("Loss");
    }
    return 0;
}