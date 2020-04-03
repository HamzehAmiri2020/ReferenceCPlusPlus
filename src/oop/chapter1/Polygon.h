/*
 * Polygon.h
 *
 *  Created on: Apr 2, 2020
 *      Author: root
 */

#ifndef SRC_OOP_CHAPTER1_POLYGON_H_
#define SRC_OOP_CHAPTER1_POLYGON_H_

#include <iostream>
using namespace std;

class Polygon {
private:
	int sides;
public:
	Polygon();
	Polygon(int p_sides) :
			sides(p_sides) {
		std::cout << "Constructor of Polygon" << std::endl;
	}
	virtual ~Polygon() {
		std::cout << "DeConstructor of Polygon" << std::endl;
	}
	virtual int Perimeter() = 0;
	virtual double ComputeArea() = 0;
};

#endif /* SRC_OOP_CHAPTER1_POLYGON_H_ */
