#include <iostream>
using namespace std;
 int ar(int &a,int &b){
	a=a+1;
 	cout<<a<<endl;
 	cout<<b<<endl;
 	
 	cout<<"world";
	return a;
	
 }
int main(){
	int n=5;
	int m=3;
	ar(n,m);
	cout <<" hello"<<endl;
	cout<<n;
	
	return 0;
}