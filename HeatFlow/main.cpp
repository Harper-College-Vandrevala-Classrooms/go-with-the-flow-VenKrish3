/*
 * main.cpp
 *
 *  Created on: Oct 2, 2024
 *      Author: Turbo
 */
#include <iostream>
#include "HeatFlow.hpp"

using namespace std;

int main()
{
	HeatFlow tubeTest(100,4,0.1);
	tubeTest.pretty_print();
	tubeTest.tick();
	tubeTest.pretty_print();

}


