#include <stdio.h>
int factorial(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1;
    }
    else 
    {
        return n * factorial(n - 1);
    }
}
int fibonacci(int n) 
{
    if (n == 0) 
    {
        return 0;
    }
    else if (n == 1) 
    {
        return 1;
    }
    else 
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main() 
{
    int choice, n, result;
    printf("Select an operation:\n");
    printf("1. Factorial\n");
    printf("2. Fibonacci\n");
    scanf("%d", &choice);
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    switch (choice) 
    {
        case 1:
            result = factorial(n);
            printf("Factorial of %d is: %d\n", n, result);
            break;
        case 2:
            result = fibonacci(n);
            printf("%dth Fibonacci number is: %d\n", n, result);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    return 0;
}