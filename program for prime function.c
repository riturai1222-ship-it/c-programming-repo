#include <stdio.h>

// Function to print prime factors
void primeFactors(int num)
{
    int i;

    printf("Prime factors are: ");

    for (i = 2; i <= num; i++)
    {
        while (num % i == 0)
        {
            printf("%d ", i);
            num = num / i;
        }
    }
}

int main()
{
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    primeFactors(number);

    return 0;
}