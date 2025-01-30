#include <iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;
int main(){
string file="NA_1";
string search, sentence;
string line;
ifstream la(file+".txt");
//la<<"   Farhan Khan"<<endl;
//la.open("acbgiki.txt");
search="ali(123)";
while(la){
	getline(la , sentence );
	if(sentence == search){
	cout<<"search found"<<endl;
	ofstream na("qoli.txt");
	na<<search+"\n";
	break;
	}
	
}



return 0;
}