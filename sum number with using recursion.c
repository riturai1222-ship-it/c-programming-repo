/* Calculate sum of digits of a five number using recursion */
#include <stdio.h>

int rsum(int);

int main() {
    int num, sum;

    printf("Enter number: ");
    scanf("%d", &num);

    
    sum = rsum(num);

    printf("Sum of digits is %d\n", sum);

    return 0;
}

// Recursive Function 
int rsum(int n) {
    int s, remainder;

    if (n != 0) {
        remainder = n % 10;                     // Extract the last digit
        s = remainder + rsum(n / 10);          
    } 
    else {
        return 0;                               
    }

    return s;
}