#include<iostream>
using namespace std;

typedef  struct edge(int src,int dest,int weight)
{
int src=src;
int dest=dest;
int weight=weight;
}edge;

typedef struct graph(int V,int edge)
{
int nodes[V];
int edge;
}graph;

// Bullmanford algorithm to find the shortest path between each pair of data nodes.

