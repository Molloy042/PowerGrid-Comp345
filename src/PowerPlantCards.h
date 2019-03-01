#pragma once
#include<string>
using namespace std;


class PowerPlantCards {
private:
	int cardNumber;
	string resourceType;
	int numResources;
	string cardName;
	//Resource resource;
	int powerToCities;
public:
	PowerPlantCards();
	PowerPlantCards(int card, string type, int res, int power);
	PowerPlantCards(int card, string type, int res, int power, string name);
	void setCardNum(int set);
	void setResourceNum(int res);
	void setPowerCitiesNum(int pow);
	int getCardNum();
	int getResourceNum();
	int getPowerNum();

};