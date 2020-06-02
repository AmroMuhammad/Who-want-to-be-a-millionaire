#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <stdlib.h> 
#include <ctime>
#include "Data.h"
using namespace std;
class Game{
	int randomNum;
	string answer;
	int score;
	string again;
	public:
	Game(){
		randomNum=0;
		score=0;
	}
	void play(){
		srand(time(NULL));
		while(true){
		Data data2;
		data2.questionsFill();
		data2.answersFill();
		for(int i=0;i<10;i++){
		randomNum=(rand() %39);
		cout<<(i+1)<<"- ";
		data2.print(randomNum);
		while(true){
		cout<<"Choose your Answer: ";
		cin>>answer;
		if(answer=="a" ||answer=="b" ||answer=="c" ||answer=="d" ||answer=="A" ||answer=="B" ||answer=="C" ||answer=="D"){
			if(answer==data2.answersCVector[randomNum] || answer==data2.answersSVector[randomNum]){
			 score++;
			 break;	
			}
			break;
		}
	}
		data2.questionsVector.erase(data2.questionsVector.begin()+randomNum);
		data2.answersSVector.erase(data2.answersSVector.begin()+randomNum);
		data2.answersCVector.erase(data2.answersCVector.begin()+randomNum);
		system("CLS");
	}
		while(true){
		cout<<"Your Score is "<<score<<"/10"<<endl;
		cout<<"Do you want to play again ?  Y/N ";
		cin>>again;
		if(again=="N" || again=="n") exit(1);
		else if(again=="Y" || again=="y"){
			score=0;
			system("CLS");
			break;
		}
	}
		system("CLS");
	}
	}
};
#endif
