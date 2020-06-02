#ifndef START_H
#define START_H
#include <iostream>
#include <string>
#include <fstream>
#include "Data.h"
#include "Game.h"
using namespace std;
class Start{
	public:
	void mainMenu(){
		string menuRes;
		string name;
		while(true){
		cout<<"A) New game"<<endl<<"B) Help"<<endl<<"C) Exit"<<endl;
		cout<<"Enter your choice ";
		cin>>menuRes;
		if(menuRes == "a" || menuRes == "A" ){
			system("CLS");
			cout<<"Enter Your Name ";
			cin>>name;
			system("CLS");
			Game playing;
			playing.play();
		}
		else if(menuRes == "b" || menuRes == "B" ){
		Data data1;
		data1.help();
		}
		else if(menuRes == "c" || menuRes == "C" ){
			exit(1);
		}
		else{
			system("CLS");
		}
	}
}
};
#endif
