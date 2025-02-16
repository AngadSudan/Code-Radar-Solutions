#include <stdio.h>

void main(){
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            printf("* ");
        }
        printf("\n");
    }
}