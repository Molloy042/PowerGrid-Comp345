/*
 * City.h
 *
 *  Created on: Feb 25, 2019
 *      Author: t_lall
 */

#ifndef CITY_H_
#define CITY_H_
#include<string>
#include "Player.h"
using namespace std;

class City{
private:
	int number;
	string name;
	bool isFull;
	Player& player;

public:
	City(int num, string name);
	void setNum(int num);
	void setName(string name);
	void setFull(bool isFull);
	void setPlayer(Player& owner);
	int getNum(){return number;}
	string getName(){return name;}
	bool getFull(){return isFull;}
	Player getPlayer(){return player;}

};



#endif /* CITY_H_ */
