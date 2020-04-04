/*
 * Pointer1.h
 *
 *  Created on: Apr 3, 2020
 *      Author: root
 */

#ifndef SRC_POINTER_CHAPTER1_AGGREGATEDATA_H_
#define SRC_POINTER_CHAPTER1_AGGREGATEDATA_H_

#include <iostream>
using namespace std;

namespace Pointer {
class AggregateData {
private:
	int *startData;
	int size;
public:
	AggregateData() :
			startData(nullptr), size(0) {
		cout << "DeConStructor Started" << endl;
	}
	AggregateData(int size) :
			startData(nullptr), size(size) {
		cout << "DeConStructor Started" << endl;
	}

	virtual ~AggregateData() {
		cout << "DeConStructor Started" << endl;
	}

	virtual void setSize(int size);
	virtual void setStartData(int *startData);
	virtual int Sum();

	static void runService();
};
}

#endif /* SRC_POINTER_CHAPTER1_AGGREGATEDATA_H_ */
