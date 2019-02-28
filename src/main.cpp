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
#include"Player.h"
#include<cstdlib>

int main(){
	Player player1(1, "Trevor", 1000 ,"Red");
	Player player2(2, "Stephen", 1000 ,"Blue");

	City city(0, "memphis");
	City city1(1, "Miami");
	City city2(2, "New york");
	City city3(3, "Philly");
	City city4(4, "Boston");

	city.setPlayer(player1);
	city.setPlayer(player2);

	//create a new graph
    int totalVertices=5;
    Graph *graph;
    graph = Graph::createGraph(totalVertices);

    //connect edges
    Graph::addEdge(graph,city,city1);
    Graph::addEdge(graph,city,city2);
    Graph::addEdge(graph,city,city3);
    Graph::addEdge(graph,city4,city);
    Graph::addEdge(graph,city1,city3);
    Graph::addEdge(graph,city2,city3);

    // print the adjacency list representation of graph
	Graph::printGraph(graph);
	cout << city.getPlayer().getPlayer() << endl;
	cout << city.getFull() << endl;
}




