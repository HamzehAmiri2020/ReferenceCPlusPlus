/*
 * MainRunner.cpp
 *
 *  Created on: Apr 2, 2020
 *      Author: root
 */

#include "oop/chapter1/Triangle.h"

int main(int argc, char **argv) {
	using OOP1::Triangle;
	Triangle tr1(2, 2, 2);
	Triangle *tr2 = new Triangle(2, 2, 2);
	cout << tr2->ComputeArea();
	cout << tr1.ComputeArea();
}

