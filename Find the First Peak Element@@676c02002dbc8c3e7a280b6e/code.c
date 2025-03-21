#include <stdio.h>
int check(int arr[], int n){
    if(arr[0]>arr[1]) return arr[0];
    for(int i=1;i<n-1;i++){
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
            return arr[i];
        }
    }
    if(arr[n-2]<arr[n-1]) return arr[n-1];
    return -1;
}
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d", check(arr,n));
    return ;
}