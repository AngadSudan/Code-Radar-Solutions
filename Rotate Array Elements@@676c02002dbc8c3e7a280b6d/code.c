#include <stdio.h>
void main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    // [1,2,3,4,5]
    for(int i=0;i<k;i++){
        int temp= arr[n-1];
        for(int i=1;i<n-1;i++){
            arr[i]=arr[i++];
        }
        arr[0]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[n]);
    }
}