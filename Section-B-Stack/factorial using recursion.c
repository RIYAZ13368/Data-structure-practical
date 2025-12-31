#include <stdio.h>
int factorial(int n)
{
    printf("Function Call: factorial(%d)\n", n);
    if (n == 0)
    {
        printf("Return from factorial(0) = 1\n");
        return 1;
    }
    else
    {
        int result = n * factorial(n - 1);
        printf("Return from factorial(%d) = %d\n", n, result);
        return result;
    }
}
int main()
{
    int num, fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    fact = factorial(num);
    printf("\nFinal Result:\n");
    printf("Factorial of %d is %d\n", num, fact);
    return 0;
} 
