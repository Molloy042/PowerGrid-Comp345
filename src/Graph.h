#pragma once
#ifndef Graph_H
#define Graph_H
#include "AdjList.h"
#include "City.h"

//Class for a graph. A graph as an array of adjacency lists
//Size of array will be V (total vertices)

class Graph {

private:
	int V;
	AdjList *arr;

public:
	static Graph *createGraph(int V);
	static void addEdge(Graph *graph, City& src, City& dest);
	static void printGraph(Graph *graph);
};

#endif Graph_H
