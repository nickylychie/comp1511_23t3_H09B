// Nicole, 23T3 Week 9
// Tutorial demo code for copying and appending linked lists

#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

struct node {
  int data;
  struct node *next;
};

struct node *create_new_node(int value);
struct node *create_list_1(void);
struct node *create_list_2(void);
struct node *create_list_3(void);
void print_list(struct node *head);
struct node *free_list(struct node *head);
struct node *copy(struct node *list);
struct node *list_append(struct node *first_list, struct node *second_list);

int main(void) {

    struct node *list_1 = create_list_1();
    printf("\nList 1:\n");
    print_list(list_1);

    printf("\nCopied list 1:\n");
    struct node *copied_list = copy(list_1);
    print_list(copied_list);

    struct node *list_2 = create_list_2();
    printf("\n\n\nList 2:\n");
    print_list(list_2);

    struct node *list_3 = create_list_3();
    printf("\nList 3:\n");
    print_list(list_3);

    printf("\nAppended list 2 & 3:\n");
    struct node *appended_list = list_append(list_2, list_3);
    print_list(appended_list);

    printf("\n");

    return 0;
}

// Returns a copy of the linked list and frees the original list.
struct node *copy(struct node *list) {
    return NULL;
}

// Returns a new linked list where it is the second appended to the first
struct node *list_append(struct node *first_list, 
                         struct node *second_list) {
    return NULL;
}

struct node *create_new_node(int value) {

    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = NULL;

    return new_node;
}

struct node *create_list_1(void) {
    int array[SIZE] = {5, 10, 15, 20, 25, 30};
    struct node *head = create_new_node(array[0]);
    struct node *current = head;

    for (int i = 1; i < SIZE; i++) {
        current->next = create_new_node(array[i]);
        current = current->next;
    }

    return head;
}

struct node *create_list_2(void) {
    int array[SIZE] = {1, 2, 3, 4, 5, 6};
    struct node *head = create_new_node(array[0]);
    struct node *current = head;

    for (int i = 1; i < SIZE; i++) {
        current->next = create_new_node(array[i]);
        current = current->next;
    }

    return head;
}

struct node *create_list_3(void) {
    int array[SIZE] = {7, 8, 9, 10, 11, 12};
    struct node *head = create_new_node(array[0]);
    struct node *current = head;

    for (int i = 1; i < SIZE; i++) {
        current->next = create_new_node(array[i]);
        current = current->next;
    }

    return head;
}

void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}

struct node *free_list(struct node *head) {

    struct node *to_free = head;
    while (head != NULL) {
        to_free = head;
        head = head->next;
        free(to_free);
    }

    return head;
}