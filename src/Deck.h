/*
 * Deck.h
 *
 *  Created on: Feb 28, 2019
 *      Author: trevt
 */

#ifndef DECK_H_
#define DECK_H_

#include"PowerPlantCards.h"
#include<iostream>
#include<vector>
using namespace std;

class Deck{
private:
	vector<PowerPlantCards>deck;
public:
	void addCard(PowerPlantCards powerPlant);
	void shuffle();
	string showDeck();
};



#endif /* DECK_H_ */
