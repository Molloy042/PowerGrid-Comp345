#include "Graph.h"
#include<cstdlib>
#include<iostream>


Graph *Graph::createGraph(int V) {

	Graph *graph = new Graph;
	graph->V = V;
	//create an array of adjacency list. size of array - V
	graph->arr = new AdjList[V];
	//initialize with NULL (e.g root=NULL)
	for (int i = 0; i < V; i++) {
		graph-> arr[i].nullHead();
	}
	return graph;
};

void Graph::addEdge(Graph *graph, int src, int dest) {

	//Add an edge from src to dest. A new node added to the adjacency list of src
	//node added at beginning
	AdjListNode *nptr = AdjListNode::newAdjListNode(dest);
	nptr-> setNext(graph->arr[src].getHead());
	graph->arr[src].setHead(nptr);
	//connect from dest to src (since undirected)
	nptr = AdjListNode::newAdjListNode(src);
	nptr->setNext(graph->arr[dest].getHead());
	graph->arr[dest].setHead(nptr);
};

void Graph::printGraph(Graph *graph) {

	//loop over each adjacent list
	for (int i = 0; i < graph->V; i++) {
		AdjListNode *root = graph->arr[i].getHead();
		std::cout << "Adjacency list of vertex " << i << std::endl;
		//loop over each node in list
		while (root != NULL) {
			std::cout << root-> getData() << " -> ";
			root = root-> getNext();
		}
		std::cout << std::endl;
	}
};