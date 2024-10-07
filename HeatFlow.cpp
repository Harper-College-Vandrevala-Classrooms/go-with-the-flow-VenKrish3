/*
 * HeatFlow.cpp
 *
 *  Created on: Oct 1, 2024
 *      Author: Turbo
 */
#include "HeatFlow.hpp"
#include <iostream>

//int rod[8] = {0,0,0,0,0,0,0,0};
//int heatChange[3];

using namespace std;

HeatFlow::HeatFlow(float rod[8], float all)
{
	//this->rod = rod;
	for(int i = 0; i<9; i++)
	{
		rod[i] = all;
	}
};

float HeatFlow::tick(float rod[], float heat, int location)
{
	cout << "Where would you like to add heat (1-8)? ";
	cin >> location;
	while(location < 1 || location > 8)
	{
		cout << "invalid input, please try again: ";
		cin >> location;
	}
	location--;
	cout << "How much heat would you like to put in? ";
	cin >> heat;
	return heat;
};

void HeatFlow::pretty_print()
{

};



