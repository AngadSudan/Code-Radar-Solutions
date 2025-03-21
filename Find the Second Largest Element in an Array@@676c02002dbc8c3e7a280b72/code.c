#include <stdio.h>
int secondlargest(int arr[], int n){
    if(n==1){ return -1;}
    int start=0;
    int end= n-1;
    while(start<end){
        int mid= start+end/2;
        if(arr[mid]>=arr[start]){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return arr[start];
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