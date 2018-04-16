#pragma once
#include "stdafx.h"
#include <cstdlib>
using namespace std;

class currency
{
private:
	int penny = 0;
	int nickel = 0;
	int dime = 0;
	int quartar = 0;
	int ones = 0;
	int fives = 0;
	int tens = 0;
	int twenties = 0;
	int fifties = 0;
	int hundreds = 0;
	double creditBal = 0;
	int acctNum = 0;
	int routNum = 0;

public:
	double getBalance()
	{//Will return total balance of a person
		return getPennyBal() + getNickelBal() + getDimeBal() + getQuartarBal() + getOneBal() + getFiveBal() + getTenBal() + getTwentyBal() + getFiftyBal() + getHundredBal();
	}
	double getPennyBal()
	{
		return penny * 0.01;
	}
	double getNickelBal()
	{
		return nickel * 0.05;
	}
	double getDimeBal()
	{
		return dime * 0.1;
	}
	double getQuartarBal()
	{
		return quartar * 0.25;
	}
	int getOneBal()
	{
		return ones;
	}
	int getFiveBal()
	{
		return fives * 5;
	}
	int getTenBal()
	{
		return tens * 10;
	}
	int getTwentyBal()
	{
		return twenties * 20;
	}
	int getFiftyBal()
	{
		return fifties * 50;
	}
	int getHundredBal()
	{
		return hundreds * 100;
	}

	void checkAcctNum()
	{
		if (acctNum = 0)
		{
			acctNum = rand() % 10000000 + 89999999;
		}
		//Needs to also check all other account numbers which should be stored in a database file. 
	}

	currency(); //Default Constructor
	currency(int newPenny, int newNickel, int newDime, int newQuartar, int newOnes, int newFives, int newTens, int newTwenties, int newFifties, int newHundreds, double creditBal);
	~currency(); //Destructor
};