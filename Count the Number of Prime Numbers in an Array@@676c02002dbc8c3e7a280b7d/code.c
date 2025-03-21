#include <stdio.h>

int isPrime(int n){
    if(n==2){return 1;}
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int counter=0;
    for(int i=0;i<n;i++){
        if(isPrime(arr[i])==1){
            counter++;
        }
    }
    printf("%d",counter);
}