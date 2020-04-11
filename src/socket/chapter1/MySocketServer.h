/*
 * MySocketServer.h
 *
 *  Created on: Apr 11, 2020
 *      Author: root
 */

#ifndef SRC_SOCKET_CHAPTER1_MYSOCKETSERVER_H_
#define SRC_SOCKET_CHAPTER1_MYSOCKETSERVER_H_
#include <sys/socket.h>

namespace MySocketServer {
class MySocketServer {
private:
	int server_fd;
	int PORT;
	struct sockaddr_in *address;
public:
	MySocketServer();
	MySocketServer(int port);
};
}

#endif /* SRC_SOCKET_CHAPTER1_MYSOCKETSERVER_H_ */
