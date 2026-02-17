// Compute a raised to the power b using recursion without using pow() function

#include <stdio.h>

long long power(int a, int b)
{
    if(b == 0)
        return 1;
    return a * power(a, b - 1);
}

int main()
{
    int a, b;
    printf("Enter base and exponent: ");
    scanf("%d %d", &a, &b);

    long long result = power(a, b);

    printf("Result is:\n");
    printf("%lld", result);

    return 0;
}