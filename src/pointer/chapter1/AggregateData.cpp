/*
 * Pointer1.cpp
 *
 *  Created on: Apr 3, 2020
 *      Author: root
 */

#include "AggregateData.h"

namespace Pointer {

void AggregateData::setSize(int size) {
	this->size = size;
}

void AggregateData::setStartData(int *startData) {
	this->startData = startData;
}

int AggregateData::Sum() {
	int sum = 0;
	for (int index = 0; index < this->size; ++index) {
		sum += *(startData + index);
	}

	return sum;
}

void AggregateData::runService() {
	int arrayData[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	AggregateData *agg = new AggregateData();
	agg->setSize(10);
	agg->setStartData(arrayData);
	cout << "Sum : " << agg->Sum() << endl;
}
}

