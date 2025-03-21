#include <stdio.h>
int majority(int arr[], int n){
    int element1=arr[0];
    int count=1;
    for(int i=0;i<n;i++){
        if(element1!=arr[i]){
            count--;
            if(count==0){
                count=1;
                element1=arr[i];
            }
        }else{
            count++;
        }
    }
    if(count==1 && n!=1){
        return -1;
    }
    return element1;
}

void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("%d",majority(arr,n));
}
