#pragma once

#include "currency.h"

class wallet
{
private:
	int acctNum = 0;
	int routNum = 0;

public:
	void checkAcctNum()
	{
		if (acctNum = 0)
		{
			acctNum = rand() % 10000000 + 89999999;
		}
		//Needs to also check all other account numbers which should be stored in a database file. 
	}

	wallet();
	~wallet();
};

