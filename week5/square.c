// Nicole, 23T3 Week 5
// Tutorial demo code for function variables

#include <stdio.h>

int square(int x);

int main(void) {

    int input;
    printf("Enter a value: ");
    scanf("%d", &input);

    printf("value before square: %d\n", input);

    input = square(input);

    printf("value after square: %d\n", input);

    return 0;
}

int square(int x) {
    x = x * x;
    return x;
}