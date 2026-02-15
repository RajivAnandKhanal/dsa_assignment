Question no. 1 Documentation :

Write a program to implement a doubly linked list using structure. Write methods to insert (after a given node) and delete a node in a doubly linked list. Write main() to demonstrate the use of the functions.

(A) Data Structures Defined

1. A structure named node was defined that contains three members:
2. An integer variable to store data.
3. A pointer named next to point to the next node.
4. A pointer named prev to point to the previous node.
5. A global pointer named head was initialized to NULL to keep track of the first node in the list.
6. Because each node contains both next and prev pointers, the list can be traversed in both forward and backward directions.

(B) Functions

1. The add_to_end() function was created to build the initial list.
2. It connects the next pointer of the last node to the new node and sets the prev pointer of the new node back to the last node.
3. The insert_after() function was written to insert a new node after a given value.
4. It searches for the specified node and updates four pointer links properly to maintain the doubly linked structure.
5. The delete_node() function removes a specific node from the list.
6. It adjusts the next pointer of the previous node and the prev pointer of the next node so that the target node is skipped.
7. The show_list() function displays the elements of the list in order.
8. It prints the node values along with linking symbols to visually represent the connections.

(C) The main() Function

1. The main() function first creates an initial list containing the values 10, 20, and 30.
2. It then calls the insert_after() function to insert the value 25 after the node containing 20.
3. After that, it calls the delete_node() function to remove the value 10 (the head node).
4. Informative print statements were used to clearly show the changes happening in the list after each operation.

(D) Output
Original sequence:
10 -20 -30 -NULL
After placing 25 following 20:
10 -20 -25 -30 -NULL
After removing 10 (starting element):
20 -25 -30 -NULL
