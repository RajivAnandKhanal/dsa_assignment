#include <stdio.h>
#include <stdlib.h>

#define NODES 5

int connection[NODES][NODES] = {0};
int explored[NODES];

void link_nodes(int source, int destination) {
    connection[source][destination] = 1;
    connection[destination][source] = 1;
}

void clear_visited_status() {
    for (int idx = 0; idx < NODES; idx++) {
        explored[idx] = 0;
    }
}

void depth_first_search(int current_vertex) {
    printf("%d ", current_vertex);
    explored[current_vertex] = 1;

    for (int neighbor = 0; neighbor < NODES; neighbor++) {
        if (connection[current_vertex][neighbor] == 1 && !explored[neighbor]) {
            depth_first_search(neighbor);
        }
    }
}

void breadth_first_search(int starting_point) {
    int traversal_queue[NODES];
    int queue_front = 0, queue_rear = 0;

    explored[starting_point] = 1;
    traversal_queue[queue_rear++] = starting_point;

    while (queue_front < queue_rear) {
        int current_node = traversal_queue[queue_front++];
        printf("%d ", current_node);

        for (int adjacent = 0; adjacent < NODES; adjacent++) {
            if (connection[current_node][adjacent] == 1 && !explored[adjacent]) {
                explored[adjacent] = 1;
                traversal_queue[queue_rear++] = adjacent;
            }
        }
    }
}

int main() {
    link_nodes(0, 1);
    link_nodes(0, 2);
    link_nodes(1, 3);
    link_nodes(2, 4);

    printf("DFS Path beginning at node 0: ");
    clear_visited_status();
    depth_first_search(0);
    printf("\n");

    printf("BFS Path beginning at node 0: ");
    clear_visited_status();
    breadth_first_search(0);
    printf("\n");

    return 0;
}