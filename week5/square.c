// Nicole, 23T3 Week 5
// Tutorial demo code for function variables

#include <stdio.h>

int main(void) {

    int input;
    printf("Enter a value: ");
    scanf("%d", &input);

    printf("value before square: %d\n", input);

    square(input);

    printf("value after square: %d\n", input);

    return 0;
}

void square(int x) {
    x = x * x;
}