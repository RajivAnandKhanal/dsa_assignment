#include <stdio.h>
#include <stdlib.h>

struct element {
    int data;
    struct element *link;
};

struct element *start = NULL;

void appendNode(int value) {
    struct element *new_element = (struct element*)malloc(sizeof(struct element));
    new_element->data = value;
    new_element->link = NULL;

    if (start == NULL) {
        start = new_element;
    } else {
        struct element *temp = start;
        while (temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = new_element;
    }
}

void displayReversed(struct element *ptr) {
    if (ptr == NULL) {
        return;
    }
    
    displayReversed(ptr->link);
    printf("%d ", ptr->data);
}

void displayForward() {
    struct element *traversal = start;
    while (traversal != NULL) {
        printf("%d ", traversal->data);
        traversal = traversal->link;
    }
    printf("\n");
}

int main() {
    appendNode(100);
    appendNode(250);
    appendNode(475);
    appendNode(600);
    appendNode(825);

    printf("Standard sequence :\n");
    displayForward();

    printf("Inverted sequence :\n");
    displayReversed(start);
    printf("\n");

    return 0;
}