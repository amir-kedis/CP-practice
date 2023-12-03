/*
 The graph coloring problem is an assignment of a color
to each node of a graph with the constraint that no two
connected/adjacent nodes have the same color while using the
minimum number of colors. Write a program to find the minimum
number of colors needed for a given graph.

input:
3
2
0 1
1 2

output:
2

input:
5
4
0 1
1 2
2 3
3 4

output:
2

 */
#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <cmath>
#include <set>
#include <vector>

using namespace std;

/**
 * checks if any of the adjacent nodes have the same color
*/
bool isSafe(int v, vector<vector<int>>& graph, vector<int>& color, int c, int V) {
  // for all the adjacent nodes
  for (int i = 0; i < V; i++)
    // if there is an edge between v and i and the color of i is the same as c
    if (graph[v][i] && c == color[i])
      return false;
  return true;
}

/** 
 * main recursive function
 * @v: current node
*/
bool graphColoringUtil(vector<vector<int>>& graph, int m, vector<int>& color, int v, int V) {
  // if all the nodes have been colored
  if (v == V)
    return true;

  // try all the colors
  for (int c = 1; c <= m; c++) {
    // if the color is safe
    if (isSafe(v, graph, color, c, V)) {
      color[v] = c;

      // recur for the next node
      if (graphColoringUtil(graph, m, color, v + 1, V) == true)
        return true;

      // if the color is not safe, backtrack
      color[v] = 0;
    }
  }

  return false;
}

/**
 * tries all the colors and returns the minimum number of colors
*/
int minColorsForGraph(vector<vector<int>>& graph, int V) {
  // try all the colors start with 1 the maximum number of colors is V
  for (int m = 1; m <= V; m++) {
    vector<int> color(V, 0);
    // if the graph can be colored with m colors
    if (graphColoringUtil(graph, m, color, 0, V) == true)
      return m;
  }

  // will not be executed because the graph can always be colored with V colors (worst case)
  return V;
}

int main()
{
  int V, E;
  // V = number of vertices
  // E = number of edges
  cin >> V >> E;

  //  adjacency list
  vector<vector<int>> adj(V);

  // input the edges
  for (int i = 0; i < E; i++)
  {
    int u, v;
    cin >> u >> v;
    // undirected graph enter the edge in both directions
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  // print the minimum number of colors
  cout << minColorsForGraph(adj, V) << endl;
  
  return 0;
}