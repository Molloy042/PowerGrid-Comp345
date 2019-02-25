/*
 * City.h
 *
 *  Created on: Feb 25, 2019
 *      Author: t_lall
 */

#ifndef CITY_H_
#define CITY_H_
#include<string>
using namespace std;

class City{
private:
	int number;
	string name;
	bool isFull;
public:
	City(int num, string name, bool isFull);
	void setNum(int num);
	void setName(string name);
	void setFull(bool isFull);
	int getNum(){return number;}
	string getName(){return name;}
	bool getFull(){return isFull;}

};



#endif /* CITY_H_ */
