// Nicole, 23T3 Week 2
// Tutorial demo code

#include <stdio.h>

int main(void) {
    
    // scan in 2 values, a and b
    int a;
    int b;
    printf("Please enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    // if a < b, print error message - "ERROR"
    if (a < b) {
        printf("ROAR!!");
    }
    // else if b == 0, print another error message
    else if (b == 0) {
        printf("meow~");
    }
    // else if a > b, print a / b and (a * 1.0) / (b * 1.0)
    else if (a > b) {
        printf("%d, %lf\n", a/b, (a * 1.0) / (b * 1.0));
    }

    return 0;
}

