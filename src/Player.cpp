/*
 * Player.cpp
 *
 *  Created on: Feb 9, 2019
 *      Author: t_lall
 */

#include "Player.h"
using namespace std;

Player::Player(){
	name = "";
	player_num = 0;
	elektro = 0;
	colour = "";
}

Player::Player(int p_num, string player_name, int player_money, string player_colour){
	name = player_name;
	player_num = p_num;
	elektro = player_money;
	colour = player_colour;
}

void Player::setElektro(int money_spent){
	elektro = elektro - money_spent;
}


/*int main() {
	Player c(1,"asdven", 0, "green");
	cout << c.getPlayer();
	return 0;
}*/


