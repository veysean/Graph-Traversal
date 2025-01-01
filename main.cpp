#include "Graph-Traversal.hpp"

int main()
{

    Graph g;
    // Adding edges (Example graph from the image)
    g.addEdge('0', '1');
    g.addEdge('0', '4');
    g.addEdge('1', '2');
    g.addEdge('1', '3');
    g.addEdge('3', '4');

    // Print graph
    g.print();

    // Perform DFS and BFS
    g.DFS('0');
    g.BFS('0');
    return 0;
}