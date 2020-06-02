#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
class Data{
private:
		struct SavingQuestions{
			string row1;
			string row2;
			string row3;
			string row4;
			string row5;
			string row6;			
		};
	public:
vector<SavingQuestions> questionsVector;
vector<string> answersCVector;
vector<string> answersSVector;
	void questionsFill(){
		string saveQuestion;
		ifstream questionsFile;
		questionsFile.open("Questions.txt");
		if(questionsFile.fail()){
			cerr<<"can't open questions file'"<<endl;
			exit(1);
		}
		while(getline(questionsFile,saveQuestion)){
			SavingQuestions filling;
			filling.row1=saveQuestion;
			getline(questionsFile,saveQuestion);
			filling.row2=saveQuestion;
			getline(questionsFile,saveQuestion);
			filling.row3=saveQuestion;
			getline(questionsFile,saveQuestion);
			filling.row4=saveQuestion;
			getline(questionsFile,saveQuestion);
			filling.row5=saveQuestion;
			getline(questionsFile,saveQuestion);
			filling.row6=saveQuestion;
			questionsVector.push_back(filling);
		}
	}
	void answersFill(){
		string saveAnswersC;
		ifstream answersFileC;
		answersFileC.open("AnswersCapital.txt");
		if(answersFileC.fail()){
			cerr<<"can't open capital answers file'"<<endl;
			exit(1);
		}
		while(getline(answersFileC,saveAnswersC)){
			answersCVector.push_back(saveAnswersC);
		}
		string saveAnswersS;
		ifstream answersFileS;
		answersFileS.open("AnswersSmall.txt");
		if(answersFileS.fail()){
			cerr<<"can't open Small answers file'"<<endl;
			exit(1);
		}
		while(getline(answersFileS,saveAnswersS)){
			answersSVector.push_back(saveAnswersS);
		}
	}
	void print(int i){
  		cout<<questionsVector[i].row1<<endl<<questionsVector[i].row2<< endl<<questionsVector[i].row3<<endl;
		cout<<questionsVector[i].row4<<endl<<questionsVector[i].row5<<endl<<questionsVector[i].row6<<endl;
  }
  void help(){
  			system("CLS");
			string helpText;
			ifstream help;
			help.open("help.txt");
			if(help.fail()){
				cerr<<"can't open help file'"<<endl;
				exit(1);
			}
			while(!help.eof()){
			getline(help,helpText);
			cout<<helpText<<endl;
		}
			help.close();
			while(true){
			cout<<endl<<"Press z to return to start menu ";
			string temp;
			cin>>temp;
			if(temp=="z" || temp=="Z"){
				system("CLS");
				break;
			}
			}
  }

};
#endif
