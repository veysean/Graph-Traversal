#ifndef DFS_HPP
#define DFS_HPP

#include <iostream>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <set>

using namespace std;

class Graph
{
    map<char, list<char>> adjList; // Adjacency list

public:
    // Add an edge to the graph
    void addEdge(char u, char v, bool isDirected = false)
    {
        adjList[u].push_back(v);
        if (!isDirected)
        {
            adjList[v].push_back(u);
        }
    }

    // Print the adjacency list
    void print()
    {
        for (auto i : adjList)
        {
            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }

    // Recursive DFS Helper
    void dfsRecursiveHelper(char currentVertex, set<char> &visited)
    {
        cout << currentVertex << " ";
        visited.insert(currentVertex);

        for (auto neighbor : adjList[currentVertex])
        {
            if (visited.find(neighbor) == visited.end())
            {
                dfsRecursiveHelper(neighbor, visited);
            }
        }
    }

    // DFS - Recursive Approach
    void DFS(char startVertex)
    {
        set<char> visited;
        cout << "DFS: ";
        dfsRecursiveHelper(startVertex, visited);
        cout << endl;
    }

    // BFS - Iterative Approach
    void BFS(char startVertex)
    {
        queue<char> q;
        set<char> visited;

        q.push(startVertex);
        visited.insert(startVertex);

        cout << "BFS: ";

        while (!q.empty())
        {
            char currentVertex = q.front();
            q.pop();
            cout << currentVertex << " ";

            for (auto neighbor : adjList[currentVertex])
            {
                if (visited.find(neighbor) == visited.end())
                {
                    visited.insert(neighbor);
                    q.push(neighbor);
                }
            }
        }
        cout << endl;
    }
};

#endif