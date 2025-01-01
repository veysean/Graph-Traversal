# Graph Traversal: Depth-First Search (DFS) and Breadth-First Search (BFS)

## Overview
This project implements a graph traversal library in C++ that includes:
- Depth-First Search (DFS): recursive approaches.
- Breadth-First Search (BFS): Iterative approach.

The graph is represented using an adjacency list for efficient traversal and edge representation.

## Features
- Add undirected or directed edges to the graph.
- Print the graph structure in an adjacency list format.
- Perform graph traversals:
  - DFS
  - BFS

The implementation is modular, with BFS and DFS functionality separated into different files for clarity and reusability.

## File Structure
```
.
├── Graph-Traversal.hpp          # Header file defining the Graph class and its methods..
├── main.cpp           # Main file demonstrating usage of the library.
├── README.md          # Documentation for the project.
```

## Getting Started
### Prerequisites
To compile and run the code, you need:
- A C++ compiler that supports C++11 or higher.

### Compilation
Use the following command to compile the code:
```bash
g++ -std=c++11 main.cpp -o graph_traversal
```

### Running the Program
Run the executable to see the example graph and traversal outputs:
```bash
./graph_traversal
```

## Example Usage
```cpp
#include "Graph-Traversal.hpp"

int main() {
    Graph g;

    // Adding edges to the graph
    g.addEdge('0', '1');
    g.addEdge('0', '4');
    g.addEdge('1', '2');
    g.addEdge('1', '3');
    g.addEdge('3', '4');

    // Print the graph structure
    g.print();

    // Perform traversals
    g.DFS('0');
    g.BFS('0');

    return 0;
}
```

## Output
For the above example, the program will output:
```
0 -> 1 4
1 -> 0 2 3
4 -> 0 3
2 -> 1
3 -> 1 4
DFS: 0 1 2 3 4
BFS: 0 1 4 2 3

