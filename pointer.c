#include <stdio.h>

int main(){
    char i = 'ritu';
    char* j = &i; // j is a pointer pointing to i (j is character pointer) 

    float k = 6.22;
    float* k1 = &k;
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    printf("The address of k is %p\n", &k);


    printf("The value at address j is %d\n", *(&i));

    return 0;
}