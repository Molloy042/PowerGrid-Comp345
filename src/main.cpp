/*
 * main.cpp
 *
 *  Created on: Feb 25, 2019
 *      Author: t_lall
 */
#include"AdjList.h"
#include"City.h"
#include"AdjlistNode.h"
#include"Graph.h"
#include<cstdlib>

int main(){
	City city(0, "memphis", false);
	City city1(1, "Miami", false);
	City city2(2, "New york", false);
	City city3(3, "Philly", false);


//create a new graph
    int totalVertices=4;
    Graph *graph;
    graph = Graph::createGraph(totalVertices);
    //connect edges
    Graph::addEdge(graph,city,city1);
    Graph::addEdge(graph,city,city2);
    Graph::addEdge(graph,city,city3);
    Graph::addEdge(graph,city1,city3);
    Graph::addEdge(graph,city2,city3);
    /*
    addEdge(graph,0,1);
    addEdge(graph,0,4);
    addEdge(graph,1,2);
    addEdge(graph,1,3);
    addEdge(graph,1,4);
    addEdge(graph,2,3);
    addEdge(graph,3,4);
    */
   // print the adjacency list representation of graph
	Graph::printGraph(graph);
}




