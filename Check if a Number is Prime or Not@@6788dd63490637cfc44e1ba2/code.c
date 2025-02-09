#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d",&num);
    int answer=1;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            answer=0;
        }
    }
    if(answer==1){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}