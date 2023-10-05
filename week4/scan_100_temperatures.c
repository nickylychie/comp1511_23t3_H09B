// Nicole, Week 4 23T3
// Tutorial demo code

#include <stdio.h>

#define SIZE 100

int main(void) {

    // initialise an array
    int temps[SIZE];

    // scan in temperatures until ctrl-d
    int i = 0;
    while (scanf("%d", &temps[i]) == 1 && i < SIZE) {
        i++;
    }

    if (i == 1) {
        // create a variable to hold the highest temp
        int highest_temp = temps[0];

        // loop through array to find highest temp
        int j = 0;
        while (j < i) {
            if (temps[j] > highest_temp) {
                highest_temp = temps[j];
            }
            j++;
        }

        // print highest temp
        printf("Highest temp is %d\n", highest_temp);
    }
    
    return 0;
}