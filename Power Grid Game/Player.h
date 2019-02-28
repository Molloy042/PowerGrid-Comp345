/*
 * Player.h
 *
 *  Created on: Feb 9, 2019
 *      Author: t_lall
 */

#ifndef Player_H
#define Player_H
#include "City.h"
#include <iostream>


class Player {

public:
	Player();

	Player(int player_num, std::string player_name, int player_money, std::string player_colour);

	void setPlayer(std::string newName);
	void setElektro(int newMoney);
	void setColour(std::string newColour);
	void setPlayerNum(int newNum);
	std::string getName(); 
	int getPlayerNum();
	int getElektro();

private:
	std::string name;
	int elektro;
	std::string colour;
	int player_num;
	//City cityOwned;

};



#endif Player_H
