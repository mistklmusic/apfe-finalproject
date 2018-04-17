#pragma once
#include <string>

#include "wallet.h"

using namespace std;

class person
{
private:
	string hairColor;
	string eyeColor;
	bool gender; //male 1, female 2

public:
	string getHairColor()
	{
		return hairColor;
	}
	string getEyeColor()
	{
		return eyeColor;
	}
	string getGender()
	{
		if (gender)
		{
			return "male";
		}
		else
		{
			return "female";
		}
	}
	person();
	~person();
};

