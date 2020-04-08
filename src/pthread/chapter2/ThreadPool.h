/*
 * ThreadPool.h
 *
 *  Created on: Mar 21, 2020
 *      Author: root
 */

#ifndef THREADCPP_POOL1_THREADPOOL_H_
#define THREADCPP_POOL1_THREADPOOL_H_

#include <pthread.h>
#include <unistd.h>
#include <deque>
#include <iostream>
#include <vector>
#include <errno.h>
#include <string.h>

#include "Mutex.h"
#include "Task.h"
#include "CondVar.h"
#include "Global.h"

using namespace std;

namespace ThreadPool2 {
class ThreadPool {
public:
	ThreadPool();
	ThreadPool(int pool_size);
	~ThreadPool();
	int initialize_threadpool();
	int destroy_threadpool();
	void* execute_thread();
	int add_task(Task *task);

	static void runService();
private:
	int m_pool_size;
	Mutex m_task_mutex;
	CondVar m_task_cond_var;
	std::vector<pthread_t> m_threads;// storage for threads
	std::deque<Task*> m_tasks;
	volatile int m_pool_state;
};
}

#endif /* THREADCPP_POOL1_THREADPOOL_H_ */
