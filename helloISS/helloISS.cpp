#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <string.h>
#include <fstream>
#include <windows.h>
#include <winsock.h>
//#include <afxinet.h>

using namespace std;

int dbSize = 10;
bool *db = (bool*)calloc(dbSize,1); //array of 10 false (bool)


/**sets the boolean debuger switches for terminal printout*/
void setDB(int argc, char **argv){
    if(argc>1 && strpbrk("db",argv[0])){ //contains str "db" and argc>0
        if(db[9])cout << "test1\n";
        for(int i = 2; i<argc; i++){
            if(db[9])cout << argv[i] << endl;
            int dbArg = atoi(argv[i]);
            if(dbArg<dbSize && dbArg>=0) {
                db[dbArg] = true;
                if(db[9])cout << "i made it ma' " << dbArg << endl;
            }
            if(db[9])cout << "test2 with i =" << i << endl;
        }
    }
    if(db[9]){for(int i = 0; i<dbSize; i++) printf("%d:%d\t",i,db[i]); cout << endl;}
}



int main(int argc, char *argv[]){
    int lat,lon;
    setDB(argc,argv); //set debuger display toggles
    if (db[9]) cout << "we made it!" << endl;
    WINSOCK_API_LINKAGE
    

////To Do List:
////	have you considered using Python?...
////	seudo code and XML!
////	use git
////		find git instal and add to PATH
////			else reinstall and add to PATH
////		link to github using link-key thing (see github)
////		#auto script (bash) to run git upload (like a MakeFile?... :/ )
////	learn how to run sys commands in cpp
////		do they use a custome path registry? (not finding MinGW executables)
////	connect to target url
////		find lib needed
////			"curl"
////	create stream through a free local port
////		review object oriented streaming in cpp
////		find free local port
////			connect to stream
////	pull html
////		find lib
////		pull
////		interprate
////	scrape for lat/long vals
////	compare to local lat/long
////		calc if ISS is in horison (trig using radious and lat/long)
////		#get and use local system's location
////	#set to run on startup
////	#some UI "Hello ISS"
////		#pop-up if closed
////			#learn running in background
////	#next encounter timer
////		#probably use a differant website designed for this
}