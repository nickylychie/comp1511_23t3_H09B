// Nicole, 23T3 Week 8
// Tutorial demo code for iterating through a linked list

#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

struct node {
    int data;
    struct node *next;
};

struct node *create_new_node(int value);
void iterate_list(struct node *head);

int main(void) {

    struct node *head = create_new_node(0);
    struct node *current = head;

    for (int i = 1; i < SIZE; i++) {
        current->next = create_new_node(i);
        current = current->next;
    }

    iterate_list(head);

    return 0;
}

// ======================== tut exercise here! =========================

// iterate through the given list
void iterate_list(struct node *head) {
   
}

// how can you change iterate_list to return the last node instead?
// have you considered all the cases?
struct node *get_last_node(struct node *head) {

}

struct node *create_new_node(int value) {

    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = NULL;

    return new_node;
}