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




City::City(int num, string names){
	Player p;
	number = num;
	name = names;
	isFull = false;
	player = p;
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

void City::setPlayer(Player& owner){
	if(getFull()==false){
		player = owner;
		setFull(true);
	}
	else{
		cout << "City is already owned" << endl;
	}

}

