#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int printed=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            printf("Not Sorted");
            printed=1;
            break;
        }
    }
    if(printed==0){
        printf("Sorted");
    }
}