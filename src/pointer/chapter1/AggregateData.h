/*
 * Pointer1.h
 *
 *  Created on: Apr 3, 2020
 *      Author: root
 */

#ifndef SRC_POINTER_CHAPTER1_AGGREGATEDATA_H_
#define SRC_POINTER_CHAPTER1_AGGREGATEDATA_H_

namespace Pointer {
class AggregateData {
private:
	int *startData;
	int size;
public:
	AggregateData();
	AggregateData(int size);
};
}

#endif /* SRC_POINTER_CHAPTER1_AGGREGATEDATA_H_ */
