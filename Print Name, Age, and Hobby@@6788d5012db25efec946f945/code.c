#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char name[100];
    int age;
    char hobby[100];
    scanf("%s",&name);
    scanf("%d",&age);
    scanf("%s",&hobby);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobbt: %s", hobby);
    return 0;
}