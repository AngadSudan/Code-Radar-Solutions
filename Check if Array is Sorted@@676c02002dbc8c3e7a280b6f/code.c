#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int isAsc= arr[0]>arr[1]?1:0;
    int printed=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n-1;i++){
        if(isAsc==0){
            if(arr[i]>arr[i+1]){
                printf("Not Sorted");
                printed=1;
                break;
            }
        }else if(isAsc==0){
            if(arr[i]<arr[i-1]){
                printf("Not Sorted");
                printed=1;
                break;
            }
        }
    }
    if(printed==0){
        printf("Sorted");
    }
}