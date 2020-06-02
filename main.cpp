#include <iostream>
#include "Start.h"
#include <fstream>
#include <vector>
#include <stdlib.h> 
#include <ctime>
#include<unistd.h>
int main(int argc, char** argv) {
	cout<<"Welcome to Who wants to be a millionaire ...";
	sleep(3);
	system("CLS");
	Start s;
	s.mainMenu();

	return 0;
}
