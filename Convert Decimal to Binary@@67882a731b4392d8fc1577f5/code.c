#include <stdio.h>

void convertToBinary(int num) {
    int binary[32]; // Store binary digits
    int index = 0;  

    while (num > 0) {
        binary[index++] = num % 2; // Extract the last bit
        num /= 2; // Right shift equivalent
    }

    // Print in reverse (since LSB is stored first)
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

int main() {
    int num;
    scanf("%d", &num);
    
    if (num == 0) printf("0"); // Handle edge case
    else convertToBinary(num);

    return 0;
}
