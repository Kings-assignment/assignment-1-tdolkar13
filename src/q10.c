// Write a C program to swap the values of two variables using a temporary variable.
#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter the first number (a): ");
    scanf("%d", &a);
    printf("Enter the second number (b): ");
    scanf("%d", &b);
    
    temp = a; 
    a = b;    
    b = temp;             
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}