/*
 * Player.h
 *
 *  Created on: Feb 9, 2019
 *      Author: t_lall
 */

#ifndef PLAYER_H_
#define PLAYER_H_
#include "City.h"
#include <iostream>
using namespace std;

class Player{
	public:
		Player();

		Player(int player_num, string player_name, int player_money, string player_colour);

		void setPlayer(string Pname);
		void setElektro(int Pmoney);
		void setColour(string colour);
		void setPlayerNum(int p_num);
		string getPlayer(){return name;}
		int getPlayerNum(){return player_num;};
		int getElektro(){return elektro;}

	private:
		string name;
		int elektro;
		string colour;
		int player_num;
		//City cityOwned;

};



#endif /* PLAYER_H_ */
