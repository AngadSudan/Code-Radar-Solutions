#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int main() {
    int n,shift;
    scanf("%d %d",&n,&shift);
    int bitmask= n<<shift;
    if(n&1==1){
        printf("%d",1);
    }else{
        printf("%d",0);
    }
    return 0;
}