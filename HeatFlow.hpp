/*
 * HeatFlow.hpp
 *
 *  Created on: Oct 1, 2024
 *      Author: Turbo
 */

#ifndef HEATFLOW_HPP_
#define HEATFLOW_HPP_
class HeatFlow
{
	public:
		HeatFlow(float[8], float);
		float tick(float[], float, int);
		void pretty_print();
	private:
		float rod[8] = {0,0,0,0,0,0,0,0};
		int heatChange[3];
};
#endif /* HEATFLOW_HPP_ */
