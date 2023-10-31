// Nicole, 23T3 Week 8
// Tutorial demo code for creating a linked list node

#include <stdio.h>

#define SIZE 6

struct node {
    int data;
    struct node *next;
};

// Write function prototype here

int main(void) {

    struct node *head = create_new_node(0);
    struct node *current = head;

    for (int i = 1; i < SIZE; i++) {
        current->next = create_new_node(i);
        current = current->next;
    }

    return 0;
}

// Write a funtion that takes in an int value,
// and returns a pointer to a node containing that value