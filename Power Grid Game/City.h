/*
 * City.h
 *
 *  Created on: Feb 25, 2019
 *      Author: t_lall
 */

#ifndef City_H
#define City_H
#include<string>
#include "Player.h"

class Player;

class City {

private:
	int number;
	std::string name;
	bool isFull;
	Player* player;

public:
	City(int num, std::string name);
	void setNum(int num);
	void setName(std::string name);
	void setFull(bool isFull);
	void setPlayer(Player* owner);
	int getNum();
	std::string getName();
	bool getFull();
	Player* getPlayer();

};



#endif City_H
