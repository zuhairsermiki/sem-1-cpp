#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
string g="zyh,456";
char n;
stringstream p(g);
while(p>>n){


cout<<n;
if(n==','){
	cout<<endl;}
}
	return 0;
}
