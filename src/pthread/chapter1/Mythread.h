/*
 * Mythread.h
 *
 *  Created on: Apr 7, 2020
 *      Author: root
 */

#ifndef SRC_PTHREAD_CHAPTER1_MYTHREAD_H_
#define SRC_PTHREAD_CHAPTER1_MYTHREAD_H_

#include <iostream>
using namespace std;

namespace Thread {
class Mythread {
public:
	Mythread();

	virtual ~Mythread() {
		cout << "DeConstrctor Call" << endl;
	}

	void start();
	void* join();

	virtual void* run();

	static void runService();
};
}

#endif /* SRC_PTHREAD_CHAPTER1_MYTHREAD_H_ */
