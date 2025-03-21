#include <stdio.h>
int sum(int n){
    int sum=0;
    while(n>0){
        int digit=n%10;
        sum+=digit;
        n=n/10;
    }
    return sum;
}
void main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans[n];
    for(int i=0;i<n;i++){
        ans[i]= sum(arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",ans[i]);
    }
}