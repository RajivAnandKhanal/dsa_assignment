#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int comparison_count = 0;
int swap_count = 0;

void bubble_organize(int elements[], int size) {
    for (int pass = 0; pass < size - 1; pass++) {
        for (int position = 0; position < size - pass - 1; position++) {
            comparison_count++; // Record comparison
            if (elements[position] > elements[position + 1]) {
                int temporary = elements[position];
                elements[position] = elements[position + 1];
                elements[position + 1] = temporary;
                swap_count++; // Record exchange
            }
        }
    }
}

void selection_organize(int elements[], int size) {
    for (int slot = 0; slot < size - 1; slot++) {
        int smallest_pos = slot;
        for (int check = slot + 1; check < size; check++) {
            comparison_count++; // Record comparison
            if (elements[check] < elements[smallest_pos]) {
                smallest_pos = check;
            }
        }
        // Exchange the located minimum element
        int temporary = elements[smallest_pos];
        elements[smallest_pos] = elements[slot];
        elements[slot] = temporary;
        swap_count++;
    }
}

void insertion_organize(int elements[], int size) {
    for (let current = 1; current < size; current++) {
        int selected = elements[current];
        let backward = current - 1;
        // Shift elements that exceed selected value
        while (backward >= 0 && elements[backward] > selected) {
            comparison_count++;
            elements[backward + 1] = elements[backward];
            backward--;
            swap_count++;
        }
        elements[backward + 1] = selected;
        if (backward >= 0) comparison_count++;
    }
}

void combine(int elements[], int left, int middle, int right) {
    int left_size = middle - left + 1;
    int right_size = right - middle;
    int left_section[left_size], right_section[right_size];
    
    for (int idx = 0; idx < left_size; idx++) 
        left_section[idx] = elements[left + idx];
    for (int idx = 0; idx < right_size; idx++) 
        right_section[idx] = elements[middle + 1 + idx];
    
    int left_ptr = 0, right_ptr = 0, merge_ptr = left;
    
    while (left_ptr < left_size && right_ptr < right_size) {
        comparison_count++;
        if (left_section[left_ptr] <= right_section[right_ptr]) 
            elements[merge_ptr++] = left_section[left_ptr++];
        else 
            elements[merge_ptr++] = right_section[right_ptr++];
    }
    
    while (left_ptr < left_size) 
        elements[merge_ptr++] = left_section[left_ptr++];
    while (right_ptr < right_size) 
        elements[merge_ptr++] = right_section[right_ptr++];
}

void merge_organize(int elements[], int left, int right) {
    if (left < right) {
        int center = left + (right - left) / 2;
        merge_organize(elements, left, center);      // Process first segment
        merge_organize(elements, center + 1, right); // Process second segment
        combine(elements, left, center, right);      // Merge segments
    }
}

int main() {
    int quantity, option;
    printf("Enter number of elements (N): ");
    scanf("%d", &quantity);
    
    int numbers[quantity];
    srand(time(0)); // Seed random generator
    
    for (int idx = 0; idx < quantity; idx++) {
        numbers[idx] = (rand() % 1000) + 1;
    }

    printf("\nInitial sequence: ");
    for (int idx = 0; idx < quantity; idx++) 
        printf("%d ", numbers[idx]);

    printf("\n\nSelect Sorting Technique:\n1. Bubble\n2. Selection\n3. Insertion\n4. Merge\nChoice: ");
    scanf("%d", &option);

    if (option == 1) bubble_organize(numbers, quantity);
    else if (option == 2) selection_organize(numbers, quantity);
    else if (option == 3) insertion_organize(numbers, quantity);
    else if (option == 4) merge_organize(numbers, 0, quantity - 1);

    printf("\nOrdered sequence: ");
    for (int idx = 0; idx < quantity; idx++) 
        printf("%d ", numbers[idx]);
    
    printf("\n\nTotal Comparisons: %d", comparison_count);
    printf("\nTotal Swaps/Shifts: %d\n", swap_count);

    return 0;
}