#include <stdio.h>

int isPrime(int n){
    for(int i=1;i<n/2;i++){
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

    int counter;
    for(int i=0;i<n;i++){
        if(isPrime(arr[i])==1){
            counter++;
        }
    }
    printf("%d",counter);
}