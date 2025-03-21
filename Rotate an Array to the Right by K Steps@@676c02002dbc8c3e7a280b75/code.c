#include <stdio.h>
void swap(int arr[], int start, int end){
    while(start<end){
        int temp= arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int k;
    scanf("%d",&k);
    k=k%n;
    k=n-k-1;
    swap(arr,0,k);
    swap(arr,k+1,n-1);
    swap(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
