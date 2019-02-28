/*
 * City.cpp
 *
 *  Created on: Feb 25, 2019
 *      Author: t_lall
 */

#include "City.h"
#include "Player.h"
#include<cstdlib>
#include<iostream>




City::City(int num, std::string names) {
	
	number = num;
	name = names;
	isFull = false;
	player = new Player;

}

void City::setNum(int num) {

	number = num;
}

void City::setName(std::string names) {

	name = names;
}

void City::setFull(bool isFulls) {

	isFull = isFulls;
}

void City::setPlayer(Player* owner) {

	if (getFull() == false) {
		player = owner;
		setFull(true);
	}
	else {
		std::cout << "City is already owned" << std::endl;
	}

}

int City::getNum() {

	return number;
}

std::string City::getName() {

	return name;
}

bool City::getFull() {

	return isFull;
}

Player* City::getPlayer() {

	return player;
}