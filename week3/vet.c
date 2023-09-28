// Nicole, 23T2 Week 3
// Tutorial structs, enums demo

#include <stdio.h>

// what are the different parts of this enum?
// create an enum to store different types of pets
enum animal {
    DOG,
    CAT,
    CAMEL,
    BIRD,
    FISH,
};

// create a struct to store information for a pet
// include an int, double, enum, char
struct pet {
    int age;
    double weight;
    enum animal type;
    char gender;
};

int main(void) {

    // create a profile for a pet
    struct pet spot;
    // initialise the fields inside the struct
    spot.age = 14;
    spot.weight = 4.5;
    spot.type = DOG;
    spot.gender = 'm';

    // print out the stored information
    printf("Spot is %d years old and weighs %.0lfkg.\n", spot.age, spot.weight);
    printf("He is a type %d animal and is a %c.\n", spot.type, spot.gender);

    return 0;
}