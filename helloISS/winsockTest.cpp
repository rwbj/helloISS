
//replication of https://www.youtube.com/watch?v=GiOgWfmWzPY

#define _WINSOCK_DEPRECATED_NO_WARNINGS 
#define _CRT_SECURE_NO_WARNINGS //tells windows not to block DEPRECATED (unsecure) functions

#pragma comment(lib, "ws2_32.lib") //what is this?
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <string>
#include <winSock2.h>

using namespace std;

#define PORT 80 //look up what #define does: 
    //set values to native vars?
    //initiate local variables???
int main(){
    WSAData wsad; //what is a wasdata?
    WORD dllVer = MAKEWORD(2,1); //WORD = machine code word?

    if(WSAStartup(dllVer, &wsad) != 0){ //FAILE state: WSAStartup returns 0 on succes
        printf("WSA startup failed\n");
        ExitProcess(EXIT_FAILURE);
    }

    SOCKET sock = socket(
        AF_INET, //FAMILY (OVER THE INTERNET)
        SOCK_STREAM, //STRAM OVER TCP
         0 //PROTOCALL, 0 = NO SPECIFICATION
         );

    if(sock < 0 ) {
        printf("connection ocer socket faild\n");
        ExitProcess(EXIT_FAILURE);
    }
    


    ExitProcess(EXIT_SUCCESS); //BETTER FOR KERNAL THAN RETURN
}