// Nicole, 23T3 Week 7
// Tutorial demo: Command Line Arguments

#include <stdio.h>

int main(int hello, char **food) {

    // print total number of command line arguments
    printf("Total arguments: %d\n", hello);

    // print each command line argument on a new line 
    // with the index of the line
    for (int i = 0; i < hello; i++) {
        printf("index: %d, argument: %s\n", i, food[i]);
    }

    printf("Printing one letter at argv[1][3]: %c\n", food[1][3]);

    return 0;
}