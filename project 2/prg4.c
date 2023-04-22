#include <stdio.h>
int main()
{
    int n, sum=0, fDigit, lDigit;
    printf("Enter number = ");
    scanf("%d", &n);

    lDigit = n % 10;

    while(n >= 10)
    {
        n = n / 10;
    }
    fDigit = n;

    sum = fDigit + lDigit;
    printf("Sum of first and last digit = %d", sum);
    return 0;
}
