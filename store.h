#pragma once
#include "stdafx.h"
#include <vector>
#include <string>

#include "employee.h"
#include "department.h"

using namespace std;

class store
{
private:
	string storeName = "Some Name";
	employee storeManager;
	int storeNum = 0;
	int numEmployees = 0;
	vector<employee> employeeList; //Should actually be stored in a file
	int numDepartments = 0;
	vector<department> departments; //Should actually be stored in a file

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
	vector<employee> getEmployees()
	{
		vector<employee> tempList;
		//Return list of employees and their positions in alphabetical order
		//Read file named "employeeList" and add names and positions to the string tempList
		return tempList; //Returns the list employees
	}
	int getNumDepartments() //Returns number of departments in the store
	{
		return numDepartments;
	}
	vector<department> getDepartments()
	{
		vector<department> tempList;
		//Return list of departments in the store (in alphabetical order)
		//Read file named "departmentList" and add names and department manager to the tempList
		return tempList; //Returns the list departments with their managers
	}

	store();
	store(string newStoreName, employee newStoreManager, int newStoreNum);
	~store();
};

