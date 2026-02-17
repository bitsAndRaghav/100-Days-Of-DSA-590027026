// Compute the n-th Fibonacci number using recursion where fib(0)=0 and fib(1)=1

#include <stdio.h>

int fib(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fib(n-1) + fib(n-2);
}

int main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    int result = fib(n);

    printf("The %d-th Fibonacci number is:\n", n);
    printf("%d", result);

    return 0;
}