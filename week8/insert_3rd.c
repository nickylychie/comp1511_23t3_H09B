// Nicole, 23T3 Week 8
// Tutorial demo code for inserting a node into a linked list

#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

struct node {
    int data;
    struct node *next;
};

struct node *create_new_node(int value);
struct node *insert_3rd(struct node *head);

int main(void) {

    struct node *head = create_new_node(0);
    struct node *current = head;

    for (int i = 1; i < SIZE; i++) {
        current->next = create_new_node(i);
        current = current->next;
    }

    head = insert_3rd(head);

    return 0;
}

// ======================== tut exercise here! =========================

struct node *insert_3rd(struct node *head) {
}

struct node *create_new_node(int value) {

    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = NULL;

    return new_node;
}