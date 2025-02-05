#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int main() {
    int n,shift;
    scanf("%d %d",&n,&shift);
    int bitmask= 1<<shift;
    if(n&bitmask==1){
        printf(1);
    }else{
        printf(0);
    }
    printf("%s", welcome());
    return 0;
}