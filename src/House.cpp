#include "House.h"

House::House() {

}


House::House(int numOfHouses, std::string newColor, std::string newOwner) {

	houses = numOfHouses;
	color = newColor;
	owner = newOwner;
}

House::~House() {

}

void House::setHouses(int numOfHouses) {

	houses = numOfHouses;
}

void House::setColor(std::string newColor) {

	color = newColor;
}

void House::setOwner(std::string newOwner) {

	owner = newOwner;
}

int House::getHouses() {

}

std::string House::getColor() {

	return color;
}

std::string House::getOwner() {

	return owner;
}