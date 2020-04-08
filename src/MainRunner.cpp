/*
 * MainRunner.cpp
 *
 *  Created on: Apr 2, 2020
 *      Author: root
 */

#include "oop/chapter1/Triangle.h"
#include "pointer/chapter1/AggregateData.h"
#include "pthread/chapter2/ThreadPool.h"

int main(int argc, char **argv) {
	using Pointer::AggregateData;
	AggregateData::runService();

	using OOP1::Triangle;
	Triangle::runService();

	using ThreadPool2::ThreadPool;
	ThreadPool::runService();
}

