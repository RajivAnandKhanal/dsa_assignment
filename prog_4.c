#include <stdio.h>
#include <stdlib.h>

struct element {
    int data;
    struct element *forward;
    struct element *backward;
};

struct element *root = NULL;

void attach_at_end(int value) {
    struct element *fresh = (struct element*)malloc(sizeof(struct element));
    fresh->data = value;
    fresh->forward = NULL;
    fresh->backward = NULL;

    if (root == NULL) {
        root = fresh;
    } else {
        struct element *traversal = root;
        while (traversal->forward != NULL) {
            traversal = traversal->forward;
        }
        traversal->forward = fresh;
        fresh->backward = traversal;
    }
}

void place_after(int search_value, int new_value) {
    struct element *traversal = root;
    while (traversal != NULL && traversal->data != search_value) {
        traversal = traversal->forward;
    }

    if (traversal != NULL) {
        struct element *fresh = (struct element*)malloc(sizeof(struct element));
        fresh->data = new_value;
        
        fresh->forward = traversal->forward;
        fresh->backward = traversal;

        if (traversal->forward != NULL) {
            traversal->forward->backward = fresh;
        }
        traversal->forward = fresh;
    }
}

void remove_node(int target_value) {
    struct element *traversal = root;
    while (traversal != NULL && traversal->data != target_value) {
        traversal = traversal->forward;
    }

    if (traversal != NULL) {
        if (traversal->backward != NULL) {
            traversal->backward->forward = traversal->forward;
        } else {
            root = traversal->forward;
        }

        if (traversal->forward != NULL) {
            traversal->forward->backward = traversal->backward;
        }
        free(traversal);
    }
}

void display_elements() {
    struct element *traversal = root;
    while (traversal != NULL) {
        printf("%d -", traversal->data);
        traversal = traversal->forward;
    }
    printf("NULL\n");
}

int main() {
    attach_at_end(10);
    attach_at_end(20);
    attach_at_end(30);
    printf("Original sequence:\n");
    display_elements();

    place_after(20, 25);
    printf("After placing 25 following 20:\n");
    display_elements();

    remove_node(10);
    printf("After removing 10 (starting element):\n");
    display_elements();

    return 0;
}