Question No. 6 Documentation

Given an unsorted array of data, write a program to construct both a Min Heap and a Max Heap.

(A) Data-Structures

A simple integer array is used to represent the heap.

The heap is stored in array form, where parent and child relationships are calculated using index positions.

This avoids the need for pointers or explicit tree structures.

Two separate arrays named max_heap_sample and min_heap_sample are created.

Both arrays are initialized with the same unsorted values.

One is used to build the max heap and the other to build the min heap.

This approach allows both heap types to be demonstrated clearly using the same input data.

(B) Functions

The max_heap_reorganize() function ensures that the largest element is placed at the root.

It compares a parent node with its children.

If a child is greater than the parent, their values are swapped.

The min_heap_reorganize() function ensures that the smallest element is placed at the root.

It compares the parent with its children.

If a child is smaller than the parent, their values are swapped.

The heap construction functions use a loop that starts from the middle of the array and moves toward the beginning.

Each iteration calls the appropriate reorganize function.

This process arranges the entire array into a valid heap structure.

The display_contents() function is used to print the elements of the heap after construction.

(C) main() Function

In the main() function, an unsorted array is initialized with the values:
15, 20, 7, 9, and 30.

The original sequence is displayed first.

The program then calls the function to construct the max heap and prints the result.

After that, the program calls the function to construct the min heap and prints the result.

Each output section is clearly labeled to distinguish between the max heap and min heap.

(D) Output

Initial sequence:
15 20 7 9 30

Max heap arrangement:
30 20 7 9 15

Min heap arrangement:
7 9 15 20 30
