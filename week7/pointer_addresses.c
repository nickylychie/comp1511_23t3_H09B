// Nicole, 23T3 Week 7
// Tutorial demo: Pointer addresses

#include <stdio.h>

int main(void) {
    
    // make a variable and print out its value and address
    int var = 56;
    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n\n", &var);

    // make a pointer and print out its address, value, 
    // and dereferenced value
    int *var_ptr = &var;
    printf("Value of dereferenced *var_ptr: %d\n", *var_ptr);
    printf("Address stored in var_ptr: %p\n\n", var_ptr);

    printf("Address of var_ptr: %p\n", &var_ptr);

    return 0;
}