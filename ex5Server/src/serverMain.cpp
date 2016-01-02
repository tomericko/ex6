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

using namespace std;

MoviesSystem* ms = NULL;

int main(int argc, char* argv[]) {
	TCPServer* server;

	if(argc-1!= 2){
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

	server = new TCPServer(port);
	while(true){
		server->connEstablish();

		pthread_create();
	}



	//starting the movies system.

	ms->setServer(server);
	ms->getInstance().start();
	return 0;
}
