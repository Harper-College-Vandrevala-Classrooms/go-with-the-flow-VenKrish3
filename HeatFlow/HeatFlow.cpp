/*
 * HeatFlow.cpp
 *
 *  Created on: Oct 3, 2024
 *      Author: Turbo
 */

#include "HeatFlow.hpp"
#include <iostream>

//int rod[8] = {0,0,0,0,0,0,0,0};
//int heatChange[3];

using namespace std;

HeatFlow::HeatFlow(float heat, int location, float theConstant)
{
	rod[location-1] = heat;
	this->k = theConstant;
};

void HeatFlow::tick()
{
	HeatFlow *newRod = this;

	for(int i = 1; i < 7; i++)
	{
		buffer[0] = this->rod[i-1];
        buffer[1] = this->rod[i];
        buffer[2] = this->rod[i+1];

		if(i == 0)
		{
			//this is the equation where j is the number : newRod->rod[i] = buffer[j] + this->k * (buffer[j+1] - 2 * buffer[j]  + buffer[j+1]);
			newRod->rod[i] = buffer[1] + this->k * (buffer[2] - buffer[1]);
		}
		else if(i == 7)
		{
			buffer[i] = this->rod[i];
			newRod->rod[i] = buffer[1] + this->k * (buffer[0] - buffer[1]);
		}
		else
		{
			newRod->rod[i] = buffer[1] + this->k * (buffer[0] - 2 * buffer[1]  + buffer[2]);
		}
	}
	for(int i = 0; i < 8; i++)
	{
		this->rod[i] = newRod->rod[i];
	}
	delete newRod;
};

void HeatFlow::pretty_print()
{
	cout << "+------+------+------+------+------+------+------+------+" << endl;
	for(int i = 0; i < 8; i++)
	{
		cout << "|  " << this->rod[i] << "  ";
	}
	cout << "|\n+------+------+------+------+------+------+------+------+" << endl;
};





