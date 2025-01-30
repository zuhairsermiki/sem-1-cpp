#include<iostream>
#include <string>
#include<sstream>
#include<fstream>
using namespace std;
void dlt(string g,string c){
	
	ofstream pa(g+".txt",ios::trunc);
	
	pa.close();
	ofstream la(c+".txt",ios::trunc);
	
	la.close();
	string k;
	string x;
	string sum="";
	ifstream ju(g+".txt");
	while(ju)
{
	getline(ju,k);
	sum+=k+"\n";
	}
	cout<<" opening of "<<g<<".txt"<<endl;
	cout<<sum;	
}
int main(){
	
	cout<<"enter function name";
	string f;
	string e;
	cin>>f>>e;
	dlt(f,e);
	
}