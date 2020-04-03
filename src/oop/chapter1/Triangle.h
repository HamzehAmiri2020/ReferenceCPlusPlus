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

namespace OOP1 {
class Triangle: public Polygon {
private:
	int height;
	int base;
public:
	Triangle() :
			Polygon(0), height(0), base(0) {
		std::cout << "Constructor1 of Triangle" << std::endl;
	}

	Triangle(int t_base, int t_height, int t_sides) :
			Polygon(t_base), height(t_height), base(t_sides) {
		std::cout << "Constructor2 of Triangle" << std::endl;
	}
	int Perimeter();
	double ComputeArea();

};
}

#endif /* SRC_OOP_CHAPTER1_TRIANGLE_H_ */
