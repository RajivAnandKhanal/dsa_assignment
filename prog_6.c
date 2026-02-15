#include <stdio.h>

void max_heap_reorganize(int elements[], int size, int index) {
    int biggest = index;
    int left_child = 2 * index + 1;
    int right_child = 2 * index + 2;

    if (left_child < size && elements[left_child] > elements[biggest]) {
        biggest = left_child;
    }

    if (right_child < size && elements[right_child] > elements[biggest]) {
        biggest = right_child;
    }

    if (biggest != index) {
        int temporary = elements[index];
        elements[index] = elements[biggest];
        elements[biggest] = temporary;
        max_heap_reorganize(elements, size, biggest);
    }
}

void min_heap_reorganize(int elements[], int size, int index) {
    int smallest = index;
    int left_child = 2 * index + 1;
    int right_child = 2 * index + 2;

    if (left_child < size && elements[left_child] < elements[smallest]) {
        smallest = left_child;
    }

    if (right_child < size && elements[right_child] < elements[smallest]) {
        smallest = right_child;
    }

    if (smallest != index) {
        int temporary = elements[index];
        elements[index] = elements[smallest];
        elements[smallest] = temporary;
        min_heap_reorganize(elements, size, smallest);
    }
}

void construct_max_heap(int elements[], int size) {
    for (int position = size / 2 - 1; position >= 0; position--) {
        max_heap_reorganize(elements, size, position);
    }
}

void construct_min_heap(int elements[], int size) {
    for (int position = size / 2 - 1; position >= 0; position--) {
        min_heap_reorganize(elements, size, position);
    }
}

void display_contents(int elements[], int size) {
    for (int idx = 0; idx < size; idx++) {
        printf("%d ", elements[idx]);
    }
    printf("\n");
}

int main() {
    int max_heap_sample[] = {15, 20, 7, 9, 30};
    int min_heap_sample[] = {15, 20, 7, 9, 30};
    int length = 5;

    printf("Initial sequence:\n15 20 7 9 30\n\n");

    construct_max_heap(max_heap_sample, length);
    printf("Max heap arrangement:\n");
    display_contents(max_heap_sample, length);

    construct_min_heap(min_heap_sample, length);
    printf("\nMin heap arrangement:\n");
    display_contents(min_heap_sample, length);

    return 0;
}