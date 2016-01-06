
#include "Server.h"
using namespace std;

/*******************************************************************************
* function name : Server												       *
* input : nothing.														       *
* output : nothing.														       *
* explanation : constructor of a Server.									   *
*******************************************************************************/
Server::Server(){
	this->port =0;
	this->dataReceived =NULL;
	this->sock = 0;
	this->ip = NULL;
	this->threads = vector<pthread_t>();
}
/*******************************************************************************
* function name : getThreads												       *
* input : nothing.														       *
* output : a referance to the vector of the threads.														       *
* explanation : getter to the vector of threads.									   *
*******************************************************************************/
vector<pthread_t>& Server::getThreads(){
	return this->threads;
}
/*******************************************************************************
* function name : invokeThread												       *
* input : thread id as int.														       *
* output : nothing.														       *
* explanation : invoke the thread with the given id.									   *
*******************************************************************************/
void Server::invokeThread(int id){
	pthread_join(id,NULL);
}
/*******************************************************************************
* function name : addThread												       *
* input : a thread as thread_t.														       *
* output : nothing.														       *
* explanation : setter to the threads vector.									   *
*******************************************************************************/
void Server::addThread(pthread_t ptrd){
	this->threads.push_back(ptrd);
}


/*******************************************************************************
* function name : ~Server												       *
* input : nothing.														       *
* output : nothing.														       *
* explanation : destructor of a Server.										   *
*******************************************************************************/
Server::~Server(){

}

/*******************************************************************************
* function name : Server												       *
* input : port as int.													       *
* output : nothing.														       *
* explanation : constructor of a Server.									   *
*******************************************************************************/
Server::Server(int port){
	this->port = port;
	this->dataReceived =NULL;
	this->ip = NULL;
	this->sock = 0;
}

/*******************************************************************************
* function name : getIP													       *
* input : nothing.														       *
* output : ip as string.												       *
* explanation : return the ip address as string.							   *
*******************************************************************************/
char* Server::getIP(){
	return this->ip;
}

/*******************************************************************************
* function name : getPort												       *
* input : nothing.														       *
* output : port as int.													       *
* explanation : return the port as int.										   *
*******************************************************************************/
int Server::getPort(){
	return this->port;
}

/*******************************************************************************
* function name : setIP													       *
* input : ip as string.													       *
* output : nothing.														       *
* explanation : set the ip member with string.								   *
*******************************************************************************/
void Server::setIP(char*  ip){
	this->ip=ip;
}

/*******************************************************************************
* function name : setPort												       *
* input : port as int.													       *
* output : nothing.														       *
* explanation : set the port member with int.								   *
*******************************************************************************/
void Server::setPort(int port){
	this->port=port;
}
/*******************************************************************************
* function name : setSocket												       *
* input :socket as int.													       *
* output : nothing.														       *
* explanation : set the client set currently need.								   *
*******************************************************************************/
void Server::setSocket(int sock){
	this->client_sock = sock;
}

/*******************************************************************************
* function name : close													       *
* input : socket as int.												       *
* output : nothing.														       *
* explanation : close the socket of the connection.							   *
*******************************************************************************/
void Server::close(int socket){
	close(socket);
}

/*******************************************************************************
* function name : getDataReceived										       *
* input : nothing.														       *
* output : the massage as string.										       *
* explanation : return the massage as string.								   *
*******************************************************************************/
string Server::getDataReceived(){
	return string(this->dataReceived);
}

/*******************************************************************************
* function name : getSocket												       *
* input : nothing.														       *
* output : the socket.													       *
* explanation : return the socket.											   *
*******************************************************************************/
int Server::getSocket(){
	return this->sock;
}

/*******************************************************************************
* function name : sendData												       *
* input : data as string.												       *
* output : nothing.														       *
* explanation : sending the data to the socket.								   *
*******************************************************************************/
void Server::sendData(string str, int sock){}

/*******************************************************************************
* function name : dataReceiver											       *
* input : nothing.														       *
* output : nothing.														       *
* explanation : receive the massage to the buffer.							   *
*******************************************************************************/
string Server::dataReceiver(int sock){}

/*******************************************************************************
* function name : bindSocket											       *
* input : nothing.														       *
* output : nothing.														       *
* explanation : make bind to a client.										   *
*******************************************************************************/
void Server::bindSocket(){}
