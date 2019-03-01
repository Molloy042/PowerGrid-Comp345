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




City::City(int num , string names, int costs){
	
	number = num;
	name = names;
	cost = costs;
	isFull = false;
	player = new Player;
	incrementNum();
}

int City::incrementNum() {
	return ++count;
}

void City::setNum(int num){
	number = num;
}

void City::setName(string names){
	name = names;
}

void City::setFull(bool isFulls){
	isFull = isFulls;
}

void City::setPlayer(Player* owner){
	if(getFull()==false){
		player = owner;
		player->cityOwned.push_back(getName());
		setFull(true);
	}
	else{
		cout << "City is already owned" << endl;
	}

}

int City::getNum(){return number;}
int City::getCost(){return cost;}
string City::getName(){return name;}
bool City::getFull(){return isFull;}
Player* City::getPlayer(){return player;}
