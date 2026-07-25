#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 60) {
        printf("You can vote and you are a senior citizen.");
    }
    else if (age >= 40) {
        printf("You can vote.");
    }
    else if (age >= 18) {
        printf("You are eligible to vote.");
    }
    else {
        printf("You are not eligible to vote.");
    }

    return 0;
}