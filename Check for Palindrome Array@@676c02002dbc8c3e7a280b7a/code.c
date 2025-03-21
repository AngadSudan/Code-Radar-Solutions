#include <stdio.h>
int palindrome(int arr[], int n){
    int start=0;
    int end= n-1;
    while(start<end){
        if(arr[start]!=arr[end]){
            return 0;
        }
        start++;
        end--;
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

    if(palindrome(arr,n)==1){
        printf("Yes");
    }else{
        printf("No");
    }
}