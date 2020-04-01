/*
 * Polygon.h
 *
 *  Created on: Apr 2, 2020
 *      Author: root
 */

#ifndef SRC_OOP_CHAPTER1_POLYGON_H_
#define SRC_OOP_CHAPTER1_POLYGON_H_

class Polygon {
private:
	int sides;
public:
	Polygon();
	Polygon(int p_sides);
	virtual int Perimeter() = 0;
	virtual double ComputeArea() = 0;
};

#endif /* SRC_OOP_CHAPTER1_POLYGON_H_ */
