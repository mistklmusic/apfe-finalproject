#pragma once
#include "stdafx.h"
#include <vector>
#include <string>

#include "employee.h"

using namespace std;

class store
{
private:
	string storeName = "Some Name";
	employee storeManager;
	int storeNum = 0;
	int numEmployees = 0;
	vector<string> employeeList; //Should actually be stored in a file
	int numDepartments = 0;
	vector<string> departments; //Should actually be stored in a file

public:
	string getName()
	{
		return storeName;
	}

	employee getManager()
	{
		return storeManager;
	}

	int getStoreNum()
	{
		return storeNum;
	}
	
	int getNumEmployees()
	{
		return numEmployees;
	}

	vector<string> getEmployees()
	{
		vector<string> tempList;
		//Return list of employees and their positions in alphabetical order
		//Read file named "employeeList" and add names and positions to the string tempList
		//List of employees found in a file
		return tempList; //Returns the list employees
	}
	store();
	~store();
};

