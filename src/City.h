/*
 * City.h
 *
 *  Created on: Feb 25, 2019
 *      Author: t_lall
 */


#ifndef CITY_H_
#define CITY_H_

#include<string>
#include"Player.h"
using namespace std;

class Player;

class City{

private:
	 int number;
	string name;
	int cost;
	bool isFull;
	Player* player;

public:
	City(int num, string name, int cost);
	void setNum(int num);
	void setName(string name);
	void setFull(bool isFull);
	void setPlayer(Player* owner);
	int getNum();
	int getCost();
	string getName();
	bool getFull();
	Player* getPlayer();
	int incrementNum();
	int count = 0;



};



#endif /* CITY_H_ */
