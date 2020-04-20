/*
 * MySocketServer.cpp
 *
 *  Created on: Apr 11, 2020
 *      Author: root
 */

#include "MySocketServer.h"

namespace MySocketServer {
MySocketServer::MySocketServer() :
		server_fd(0), PORT(0), address(nullptr) {

}
MySocketServer::MySocketServer(int port) :
		server_fd(0), PORT(port), address(nullptr) {
	server_fd = socket(AF_INET, SOCK_STREAM, 0);
}

MySocketServer::~MySocketServer() {

}

void MySocketServer::runService() {
	auto *mySocketServer = new MySocketServer();
}
}

