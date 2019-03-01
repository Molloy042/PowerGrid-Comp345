#include"PowerPlantCards.h"

PowerPlantCards::PowerPlantCards() {
	cardNumber = 0;
	numResources = 0;
	resourceType = "";
	cardName = "";
	//vector<Resource>
	powerToCities = 0;
}

PowerPlantCards::PowerPlantCards(int card, string type, int res, int power) {
	cardNumber = card;
	resourceType = type;
	numResources = res;
	powerToCities = power;
	cardName = "";
}

PowerPlantCards::PowerPlantCards(int card, string type, int res, int power, string name) {
	cardNumber = card;
	numResources = res;
	powerToCities = power;
	cardName = name;
}

void PowerPlantCards::setCardNum(int set) {
	cardNumber = set;
}

void PowerPlantCards::setResourceNum(int res) {
	numResources = res;
}

void PowerPlantCards::setPowerCitiesNum(int pow) {
	powerToCities = pow;
}

int PowerPlantCards::getCardNum() {
	return cardNumber;
}

int PowerPlantCards::getResourceNum() {
	return numResources;
}

int PowerPlantCards::getPowerNum() {
	return powerToCities;
}

