// CoffeeHacking.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void normalTransaction(float terrorAccount, float coffeeAccount);
void hackTransaction(float terrorAccount, float coffeeAccount);
float tempTerrorBalance;
float tempCoffeeBalance;

int main()
{
	float terrorAccountBalance = 3400000;
	float coffeeAccountBalance = 0.01;

	normalTransaction(terrorAccountBalance, coffeeAccountBalance);
	hackTransaction(terrorAccountBalance, coffeeAccountBalance);

    return 0;
}

void normalTransaction(float terrorAccount, float coffeeAccount) 
{

}

void hackTransaction(float terrorAccount, float coffeeAccount) 
{
	float tempTerrorBalance;
	float tempCoffeeBalance;

}