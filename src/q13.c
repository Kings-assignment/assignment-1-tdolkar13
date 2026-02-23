// Write a C expression that evaluates whether a number is divisible by both 2 and 3 (without using the modulus operator)
#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);   
    if ((number / 2 * 2 == number) && (number / 3 * 3 == number)) {
        printf("The number is divisible by both 2 and 3.\n");
    } else {
        printf("The number is not divisible by both 2 and 3.\n");
    }
    return 0;
}
