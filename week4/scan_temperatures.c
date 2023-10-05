// Nicole, Week 4 23T3
// Tutorial demo code

#include <stdio.h>

#define SIZE 6

int main(void) {

    // initialise an array
    int temps[SIZE];

    // scan in 6 temperatures
    int i = 0;
    while (i < SIZE) {
        scanf("%d", &temps[i]);
        i++;
    }

    // create a variable to hold the highest temp
    int highest_temp = temps[0];

    // loop through array to find highest temp
    i = 0;
    while (i < SIZE) {
        if (temps[i] > highest_temp) {
            highest_temp = temps[i];
        }
        i++;
    }

    // print highest temp
    printf("Highest temp is %d\n", highest_temp);

    return 0;
}