// CoffeeHacking.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

//initializes variables
void normalTransaction(float terrorAccount, float coffeeAccount);
void hackTransaction(float terrorAccount, float coffeeAccount);
float tempTerrorBalance;

int main()
{
	float terrorAccountBalance = 3400000;
	float coffeeAccountBalance = 0.01;

	cout << "Current Terrorist Balance is: $" << terrorAccountBalance << endl;
	cout << "Current Coffee Shop Balance is: $" << coffeeAccountBalance << endl << endl;

	normalTransaction(terrorAccountBalance, coffeeAccountBalance);
	hackTransaction(terrorAccountBalance, coffeeAccountBalance);

	system("pause");
    return 0;
}

void normalTransaction(float terrorAccount, float coffeeAccount) 
{
	cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=" << endl;
	cout << "Initializing normal transaction..." << endl;
	cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n" << endl;
	cout << "Current Terrorist Balance is: $" << terrorAccount << endl;
	cout << "Current Coffee Shop Balance is: $" << coffeeAccount << endl << endl;

}

void hackTransaction(float terrorAccount, float coffeeAccount) 
{
	float tempTerrorBalance;

	cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=" << endl;
	cout << "Initializing hacked transaction..." << endl;
	cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n" << endl;
	tempTerrorBalance = terrorAccount;
	terrorAccount = coffeeAccount;
	coffeeAccount = tempTerrorBalance;

	cout << "Current Terrorist Balance is: $" << terrorAccount << endl;
	cout << "Current Coffee Shop Balance is: $" << coffeeAccount << endl;

}