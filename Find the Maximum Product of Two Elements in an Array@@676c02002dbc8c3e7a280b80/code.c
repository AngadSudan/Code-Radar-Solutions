#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int prod=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==i) continue;

            int currProd= arr[i]*arr[j];
            prod= prod>currProd?prod:currProd;
        }
    }
    printf("%d",prod);
}