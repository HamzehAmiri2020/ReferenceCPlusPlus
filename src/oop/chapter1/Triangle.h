/*
 * Triangle.h
 *
 *  Created on: Apr 2, 2020
 *      Author: root
 */

#ifndef SRC_OOP_CHAPTER1_TRIANGLE_H_
#define SRC_OOP_CHAPTER1_TRIANGLE_H_

#include "Polygon.h"
#include <math.h>

class Triangle: public Polygon {
private:
	int height;
	int base;
public:
	Triangle() :
			Polygon(0), height(0), base(0) {
	}

	Triangle(int t_base, int t_height, int t_sides);
	int Perimeter();
	double ComputeArea();

};

#endif /* SRC_OOP_CHAPTER1_TRIANGLE_H_ */
