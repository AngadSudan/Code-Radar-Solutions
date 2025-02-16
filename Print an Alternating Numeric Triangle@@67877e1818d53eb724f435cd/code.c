#include <stdio.h>

void main(){
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j%2==0){
                printf("1 ");
            }else{
                printf("0 ")
            }
        }
        printf("/n");
    }
}