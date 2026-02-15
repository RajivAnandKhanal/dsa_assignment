Question No. 7 Documentation

Given a weighted graph, write a program to implement Dijkstra's algorithm to find the shortest path from a source node to all other nodes.

(A) Data-Structures

1. A two-dimensional array adjacency_matrix[][] is used to store the weights of edges between vertices.
2. An integer array distance[] keeps track of the shortest distance from the source vertex to every other vertex.
3. A boolean array processed[] is used to mark vertices that have already been examined.
4. This prevents revisiting nodes unnecessarily.
5. A constant INFINITY is defined to represent vertices that are initially unreachable.

(B) Functions

1. The shortest_path_finder() function initializes distances:
2. All vertices are set to INFINITY.
3. The source vertex distance is set to 0.
4. It repeatedly selects the nearest unprocessed vertex and marks it as processed.
5. For each adjacent vertex of the current node, the function updates the distance if a shorter path is found through the current vertex.
6. Finally, the function prints a table showing each vertex and its shortest distance from the source.

(C) main() Function

1. The main() function sets up a sample weighted graph using a 5x5 adjacency matrix.
2. It calls shortest_path_finder() starting from vertex 0 to calculate shortest paths.
3. The output is formatted clearly so that each vertex and its distance are easy to read.
4. The program demonstrates how Dijkstra's algorithm updates distances as it finds better paths.

(D) Output

Vertex Cost
0 0
1 10
2 50
3 30
4 60
