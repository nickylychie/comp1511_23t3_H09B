// Nicole, 23T3 Week 7
// Tutorial demo: EOF loops

#include <stdio.h>

#define MAX_LETTERS 100

int main (void) {

    char my_var[MAX_LETTERS];

    printf("Enter something: ");
    printf("What address does fgets return? %p", fgets(my_var, MAX_LETTERS, stdin));
    
    printf("Scanning in until ctrl-d:\n")
    while (fgets(my_var, MAX_LETTERS, stdin) != NULL) {
        printf("Input: %s", my_var);
    }

    return 0;
}