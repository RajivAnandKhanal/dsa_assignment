Question No. 8 Documentation

Write a program to generate a list of N random integers in the range [1, 1000], where N is provided by the user. Then perform sorting based on the user’s choice and report the sorting statistics.

(A) Data-Structures

1. An integer array numbers[] stores the collection of random values.
2. The array size is determined by the user input N.
3. Two global integer variables comparison_count and swap_count track:
4. The number of comparisons performed.
5. The number of swaps or shifts executed by the sorting algorithm.
6. Using an array allows the program to pass the data easily to any sorting function and keeps all values in contiguous memory.

(B) Functions

1. Sorting Functions:
   bubble_organize(), selection_organize(), and insertion_organize() use loops to compare and rearrange elements into ascending order.

2. Merge Sort Function:
   merge_organize() uses recursion to split the array into smaller segments.
   The combine() function merges them back in sorted order.
   Each function updates comparison_count and swap_count to record the operations during sorting.
   Random numbers are generated using srand() and rand() to ensure a new dataset in each program run.

(C) main() Function

1. The main() function reads the user’s desired array size and fills the array with random integers from 1 to 1000.
2. It provides a simple selection interface for the user to choose the sorting algorithm:
   Bubble Sort
   Selection Sort
   Insertion Sort
   Merge Sort

3. The array is displayed before and after sorting to confirm the results.
4. The program prints the total number of comparisons and swaps/shifts to illustrate the efficiency of the chosen algorithm.

(D) Output
Enter number of elements (N): 8
Initial sequence: 408 486 978 897 462 342 656 443
Select Sorting Technique:
Bubble
Selection
Insertion
Merge
Choice: 1

Ordered sequence: 342 408 443 462 486 656 897 978

Total Comparisons: 28
Total Swaps/Shifts: 16
