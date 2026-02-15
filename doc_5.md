Question No. 5 Documentation

Write a program to implement an undirected graph using an adjacency matrix.
Write functions to perform BFS and DFS traversal.
Demonstrate the program using a sample graph.

(A) Data-Structures

1. A two-dimensional integer array called connection[][] is used to represent the adjacency matrix.
2. If there is an edge between two vertices, the value is 1.
3. If there is no edge, the value is 0.
4. An integer array named explored[] is used to keep track of visited vertices during traversal.
5. A constant NODES is defined to specify the total number of vertices in the graph.

(B) Functions

1. The link_nodes() function takes two vertices as input and sets the corresponding positions in the matrix to 1.
2. Since the graph is undirected, both connection[u][v] and connection[v][u] are updated.
3. The depth_first_search() function performs DFS traversal.
4. It uses recursion to visit a node and then explores its adjacent unvisited vertices deeply before backtracking.
5. The breadth_first_search() function performs BFS traversal.
6. It uses an array as a queue to visit all neighboring vertices first before moving to the next level.
7. The clear_visited_status() function resets the explored[] array before running another traversal.

(C) main() Function

1. In the main() function, a sample graph is created by linking vertices such as 0–1, 0–2, 1–3, and 2–4.
2. The program first calls the depth_first_search() function starting from vertex 0.
3. Then, the explored[] array is reset.
4. After that, the breadth_first_search() function is called starting from the same vertex.
5. Proper headings are printed so that the user can clearly see which output belongs to DFS and which to BFS.

(D) Output

DFS Path beginning at node 0:
0 1 3 2 4

BFS Path beginning at node 0:
0 1 2 3 4
