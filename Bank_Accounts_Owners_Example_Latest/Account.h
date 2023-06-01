#pragma once

#include <iostream>

class Account
{

private:

	int id;
	float balance;
	std::string type;

	static int counter;

public:

	Account();

	Account(float balance, std::string type);

	void Print();

	int GetId();

	~Account();

};