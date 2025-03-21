#include <stdio.h>
int secondlargest(int arr[], int n){
    if(n==1){ return -1;}

    for(int i=n-1;i>0;i--){
        if(arr[i]!=arr[i-1]){ 
            return arr[i];
        }
    }
    return -1;
}
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",secondlargest(arr,n));
}