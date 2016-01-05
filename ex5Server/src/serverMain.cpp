/**
 * Tomer Rahamim 203717475
 * Roi Peretz 203258041
 */
//main.cpp

#include <vector>
#include <string>
#include <iostream>
#include <iterator>
#include <sstream>
#include "MoviesSystem.h"
#include "Server.h"
#include "UDPServer.h"
#include "TCPServer.h"
#include <pthread.h>

using namespace std;

int main(int argc, char* argv[]) {
	TCPServer* server;
	int status;
	if(argc-1 != 2){
		cout<<"Missing arguments - exit"<<endl;
		return 0;
	}

	int port = atoi(argv[2]);
	int type = atoi(argv[1]);
	if(port< 1024 || port>65536){
		cout<<"invalid port number - exit"<<endl;
		return 0;
	}

	// creating a connection.

	server = TCPServer::getServerIns(port);
	MoviesSystem::getInstance()->setServer(server);
	server->threadFactory(NULL);
	/*
	pthread_t srv;
	status = pthread_create(&srv,NULL,server->threadFactory,NULL);
	if(status != 0){
		//error
	}
	//server->addThread(srv);
	pthread_join(srv, NULL);
	*/

	//starting the movies system.

	return 0;
}
