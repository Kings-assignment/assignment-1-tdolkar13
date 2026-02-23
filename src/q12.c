// Given three variables a, b, and c, write an expression that checks if a is greater than b and c is not equal to 0.
#include <stdio.h>
int main() {
    int a, b, c;                        
    printf("Enter values for a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && c != 0) {
        printf("Condition is true: a is greater than b and c is not equal to 0.\n");
    } else {
        printf("Condition is false.\n");
    }
    return 0;
}