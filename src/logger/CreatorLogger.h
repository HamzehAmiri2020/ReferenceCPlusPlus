/*
 * CreatorLogger.h
 *
 *  Created on: Apr 20, 2020
 *      Author: ceph1
 */

#ifndef SRC_LOGGER_CREATORLOGGER_H_
#define SRC_LOGGER_CREATORLOGGER_H_

#include "Logger.h"

using namespace Logger;

class CreatorLogger {
private:
public:
	CreatorLogger();
	virtual ~CreatorLogger();

	virtual Logger* FactoryMethod();
};

#endif /* SRC_LOGGER_CREATORLOGGER_H_ */
