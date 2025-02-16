#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    

    if((n<<(n-1) & 1)==1){
        printf("Set");
    }else{
        printf("Not Set");
    }
    printf("%d", n);
    return 0;
}