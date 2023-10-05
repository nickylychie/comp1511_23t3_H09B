// Nicole, Week 4 23T3
// Tutorial demo code

#include <stdio.h>

#define SIZE 6

int main(void) {

    int array[SIZE] = {1, 2};

    int i = 0;
    while (i < SIZE) {
        printf("%d\n", array[i]);
        i++;
    }

    return 0;
}