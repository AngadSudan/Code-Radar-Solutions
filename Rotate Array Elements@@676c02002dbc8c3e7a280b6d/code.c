#include <stdio.h>
void rotate(int arr[], int n){
        int temp= arr[n-1];
        for(int i=1;i<n;i++){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
}
void main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    k=k%n;
    // [1,2,3,4,5]
    for(int i=0;i<k;i++){
        rotate(arr,n);
    }
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}