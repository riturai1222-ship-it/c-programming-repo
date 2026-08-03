#include <stdio.h>

char *one[] = {
    "", "One", "Two", "Three", "Four", "Five",
    "Six", "Seven", "Eight", "Nine", "Ten",
    "Eleven", "Twelve", "Thirteen", "Fourteen",
    "Fifteen", "Sixteen", "Seventeen",
    "Eighteen", "Nineteen"
};

char *ten[] = {
    "", "", "Twenty", "Thirty", "Forty",
    "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"
};

void printWords(int n)
{
    if(n >= 100)
    {
        printf("%s Hundred ", one[n/100]);
        n %= 100;
    }

    if(n >= 20)
    {
        printf("%s ", ten[n/10]);
        if(n % 10)
            printf("%s ", one[n%10]);
    }
    else if(n > 0)
    {
        printf("%s ", one[n]);
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num >= 10000000)
    {
        printWords(num/10000000);
        printf("Crore ");
        num %= 10000000;
    }

    if(num >= 100000)
    {
        printWords(num/100000);
        printf("Lakh ");
        num %= 100000;
    }

    if(num >= 1000)
    {
        printWords(num/1000);
        printf("Thousand ");
        num %= 1000;
    }

    if(num > 0)
        printWords(num);

    return 0;
}