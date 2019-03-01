#pragma once
#ifndef House_H
#define House_H
#include<string>

class House {

private:

	std::string color;
	std::string owner; 

public:

	House();
	House(std::string newOwner);
	House(std::string newColor, std::string newOwner);
	~House();
	void setColor(std::string newColor);
	void setOwner(std::string newOwner);
	std::string getColor();
	std::string getOwner();
	
};

#endif House_H