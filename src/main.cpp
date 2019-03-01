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
#include"Deck.h"
#include"PowerPlantCards.h"
#include<cstdlib>

int main(){
	Player* player1 = new Player(1, "Trevor", 1000 ,"Red");
	Player* player2 = new Player(2, "Stephen", 1000 ,"Blue");

	City city( 0, "memphis", 10);
	City city1(1, "Miami", 10);
	City city2(2,  "New york", 10);
	City city3(3,  "Philly", 10);
	City city4( 4, "Boston", 10);

	city.setPlayer(player1);
	city2.setPlayer(player1);
	city3.setPlayer(player2);

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


	//cout << city.getPlayer()->getPlayer() << endl;
	//cout << city.getFull() << endl;
	cout << player1->showCityOwned() << endl;
	cout << player2->showCityOwned() << endl;
	


	//Part 5
	//Creating 43 Power Plant Cards
	PowerPlantCards step3(0,"",0,0,"Step3");
	PowerPlantCards ppc(3,"", 2, 2);
	PowerPlantCards ppc2(4, "", 2, 2);
	PowerPlantCards ppc3(5, "", 2, 2);
	PowerPlantCards ppc4(6, "", 2, 2);
	PowerPlantCards ppc5(7, "", 2, 2);
	PowerPlantCards ppc6(8, "", 2, 2);
	PowerPlantCards ppc7(9, "", 2, 2);
	PowerPlantCards ppc8(10, "", 2, 2);
	PowerPlantCards ppc9(11, "", 2, 2);
	PowerPlantCards ppc10(12, "", 2, 2);

	/*PowerPlantCards ppc11(13,"", 2, 2);
	PowerPlantCards ppc12(14,"", 2, 2);
	PowerPlantCards ppc13(15,"", 2, 2);
	PowerPlantCards ppc14(16,"", 2, 2);
	PowerPlantCards ppc15(17,"", 2, 2);
	PowerPlantCards ppc16(18,"", 2, 2);
	PowerPlantCards ppc17(19,"", 2, 2);
	PowerPlantCards ppc18(20,"", 2, 2);
	PowerPlantCards ppc19(21,"", 2, 2);
	PowerPlantCards ppc20(22,"", 2, 2);

	PowerPlantCards ppc21(23,"", 2, 2);
	PowerPlantCards ppc22(24,"", 2, 2);
	PowerPlantCards ppc23(25,"", 2, 2);
	PowerPlantCards ppc24(26,"", 2, 2);
	PowerPlantCards ppc25(27,"", 2, 2);
	PowerPlantCards ppc26(28,"", 2, 2);
	PowerPlantCards ppc27(29,"", 2, 2);
	PowerPlantCards ppc28(30,"", 2, 2);
	PowerPlantCards ppc29(31,"", 2, 2);
	PowerPlantCards ppc30(32,"", 2, 2);

	PowerPlantCards ppc31(33,"", 2, 2);
	PowerPlantCards ppc32(34,"", 2, 2);
	PowerPlantCards ppc33(35,"", 2, 2);
	PowerPlantCards ppc34(36,"", 2, 2);
	PowerPlantCards ppc35(37,"", 2, 2);
	PowerPlantCards ppc36(38,"", 2, 2);
	PowerPlantCards ppc37(39,"", 2, 2);
	PowerPlantCards ppc38(40,"", 2, 2);
	PowerPlantCards ppc39(42,"", 2, 2);
	PowerPlantCards ppc40(44,"", 2, 2);

	PowerPlantCards ppc41(46,"", 2, 2);
	PowerPlantCards ppc42(50,"", 2, 2);*/

	//Creating the deck to store power plant cards, and "step 3 cards"
	Deck deck;

	//Adding cards to deck
	deck.addCard(step3);
	deck.addCard(ppc);
	deck.addCard(ppc2);
	deck.addCard(ppc3);
	deck.addCard(ppc4);
	deck.addCard(ppc5);
	deck.addCard(ppc6);
	deck.addCard(ppc7);
	deck.addCard(ppc8);
	deck.addCard(ppc9);
	deck.addCard(ppc10);

/*	deck.addCard(ppc11);
	deck.addCard(ppc12);
	deck.addCard(ppc13);
	deck.addCard(ppc14);
	deck.addCard(ppc15);
	deck.addCard(ppc16);
	deck.addCard(ppc17);
	deck.addCard(ppc18);
	deck.addCard(ppc19);
	deck.addCard(ppc20);

	deck.addCard(ppc21);
	deck.addCard(ppc22);
	deck.addCard(ppc23);
	deck.addCard(ppc24);
	deck.addCard(ppc25);
	deck.addCard(ppc26);
	deck.addCard(ppc27);
	deck.addCard(ppc28);
	deck.addCard(ppc29);
	deck.addCard(ppc30);

	deck.addCard(ppc31);
	deck.addCard(ppc32);
	deck.addCard(ppc33);
	deck.addCard(ppc34);
	deck.addCard(ppc35);
	deck.addCard(ppc36);
	deck.addCard(ppc37);
	deck.addCard(ppc38);
	deck.addCard(ppc39);
	deck.addCard(ppc40);

	deck.addCard(ppc41);
	deck.addCard(ppc42);*/
	

	//show deck
	cout << deck.showDeck();

	//invoking shuffle method
	deck.shuffle();

	//showing shufffled deck
	cout << deck.showDeck();

	system("pause");
	return 0;
}




