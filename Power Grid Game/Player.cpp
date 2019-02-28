/*
 * Player.cpp
 *
 *  Created on: Feb 9, 2019
 *      Author: t_lall
 */

#include "Player.h"
#include "City.h"


Player::Player() {
	name = "";
	player_num = 0;
	elektro = 0;
	colour = "";
}

Player::Player(int p_num, std::string player_name, int player_money, std::string player_colour) {

	name = player_name;
	player_num = p_num;
	elektro = player_money;
	colour = player_colour;
}

void Player::setPlayer(std::string newName) {

	name = newName;
}

void Player::setElektro(int money_spent) {

	elektro = elektro - money_spent;
}

void Player::setColour(std::string newColour) {

	colour = newColour;
}

void Player::setPlayerNum(int newNum) {

	player_num = newNum;
}

std::string Player::getName() {

	return name;
}

int Player::getPlayerNum() {

	return player_num;
}

int Player::getElektro() {

	return elektro;
}