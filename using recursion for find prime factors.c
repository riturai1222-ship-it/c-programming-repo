/* Find Prime Factors of a number recursively */
#include <stdio.h>

void factorize(int, int);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime factors are: ");
    // Factorization starts with smallest prime number i = 2
    factorize(num, 2);

    return 0;
}

void factorize(int n, int i) {
    if (i <= n) {
        if (n % i == 0) {
            printf("%d ", i);     // Prime factor print 
            n = n / i;           
            factorize(n, i);     // Same prime number 'i' se firse try
        } 
        else {
            i++;                 // Agar divide nahi hua toh next number par jayenge 
            factorize(n, i);     // Next 'i' ke saath recursive call
        }
    }
}