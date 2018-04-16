#include "stdafx.h"
#include "currency.h"
using namespace std;

currency::currency()
{
}

currency::currency(int newPenny, int newNickel, int newDime, int newQuartar, int newOnes, int newFives, int newTens, int newTwenties, int newFifties, int newHundreds, double newCredit)
{
	penny = newPenny;
	nickel = newNickel;
	dime = newDime;
	quartar = newQuartar;
	ones = newOnes;
	fives = newFives;
	tens = newTens;
	twenties = newTwenties;
	fifties = newFifties;
	hundreds = newHundreds;
	creditBal = newCredit;

	routNum = 02100003;
	checkAcctNum();
}

currency::~currency()
{
}
