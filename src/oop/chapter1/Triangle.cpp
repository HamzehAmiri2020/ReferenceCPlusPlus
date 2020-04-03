/*
 * Triangle.cpp
 *
 *  Created on: Apr 2, 2020
 *      Author: root
 */

#include "Triangle.h"

namespace OOP1 {
Triangle::Triangle(int t_base, int t_height, int t_sides) :
		Polygon(t_sides), height(t_height), base(t_base) {
}

int Triangle::Perimeter() {
	double d_height = this->height;
	double d_base = this->base;
	double hyp = sqrt((d_height * d_height) + (d_base * d_base));
	int perimeter = (2 * hyp) + d_base;
	return perimeter;
}

double Triangle::ComputeArea() {
	double area;
	area = 0.5 * this->base * this->height;
	return area;
}
}

