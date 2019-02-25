#include "Graph.h"
#include "AdjList.h"
#include "AdjListNode.h"
#include<cstdlib>


int main() {
	//create a new graph
	int totalVertices = 4;
	Graph *graph;
	graph = Graph::createGraph(totalVertices);
	//connect edges
	Graph::addEdge(graph, 0, 1);
	Graph::addEdge(graph, 0, 2);
	Graph::addEdge(graph, 0, 3);
	Graph::addEdge(graph, 1, 3);
	Graph::addEdge(graph, 2, 3);
	/*
	addEdge(graph,0,1);
	addEdge(graph,0,4);
	addEdge(graph,1,2);
	addEdge(graph,1,3);
	addEdge(graph,1,4);
	addEdge(graph,2,3);
	addEdge(graph,3,4);
	*/
	//print the adjacency list representation of graph
	Graph::printGraph(graph);
	system("pause");
	return 0;
}