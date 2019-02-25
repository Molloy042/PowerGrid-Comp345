/*
 * City.cpp
 *
 *  Created on: Feb 25, 2019
 *      Author: t_lall
 */

#include "City.h"
#include<cstdlib>
#include<iostream>


City::City(int num, string names, bool isFulls){
	number = num;
	name = names;
	isFull = isFulls;
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
