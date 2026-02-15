Question No. 6 Documentation

Given an unsorted array of data, write a program to construct both a Min Heap and a Max Heap.

(A) Data-Structures

1. A simple integer array is used to represent the heap.
2. The heap is stored in array form, where parent and child relationships are calculated using index positions.
3. This avoids the need for pointers or explicit tree structures.
4. Two separate arrays named max_heap_sample and min_heap_sample are created.
5. Both arrays are initialized with the same unsorted values.
6. One is used to build the max heap and the other to build the min heap.
7. This approach allows both heap types to be demonstrated clearly using the same input data.

(B) Functions

1. The max_heap_reorganize() function ensures that the largest element is placed at the root.
2. It compares a parent node with its children.
3. If a child is greater than the parent, their values are swapped.
4. The min_heap_reorganize() function ensures that the smallest element is placed at the root.
5. It compares the parent with its children.
6. If a child is smaller than the parent, their values are swapped.
7. The heap construction functions use a loop that starts from the middle of the array and moves toward the beginning.
8. Each iteration calls the appropriate reorganize function.
9. This process arranges the entire array into a valid heap structure.
10. The display_contents() function is used to print the elements of the heap after construction.

(C) main() Function

1. In the main() function, an unsorted array is initialized with the values:
   15, 20, 7, 9, and 30.
2. The original sequence is displayed first.
3. The program then calls the function to construct the max heap and prints the result.
4. After that, the program calls the function to construct the min heap and prints the result.
5. Each output section is clearly labeled to distinguish between the max heap and min heap.

(D) Output

Initial sequence:
15 20 7 9 30

Max heap arrangement:
30 20 7 9 15

Min heap arrangement:
7 9 15 20 30
