// Write an expression that checks if a number is a multiple of either 3 or 5.
#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 3 == 0 || number % 5 == 0)
        printf("The number is a multiple of either 3 or 5.\n");
    else
        printf("The number is not a multiple of either 3 or 5.\n");
    return 0;
}