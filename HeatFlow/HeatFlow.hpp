/*
 * HeatFlow.hpp
 *
 *  Created on: Oct 3, 2024
 *      Author: Turbo
 */
#ifndef HEATFLOW_HPP_
#define HEATFLOW_HPP_
class HeatFlow
{
	public:
		HeatFlow(float, int, float);
		void tick();
		void pretty_print();
	private:
		float rod[8] = {10,10,10,10,10,10,10,10};
		float buffer[3];
		float k;
};
#endif /* HEATFLOW_HPP_ */
