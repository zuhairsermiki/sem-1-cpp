#include <iostream>
using namespace std;
int fact(int n){if(n<=1){
	return 1;
}else{

	return n*fact(n-1);}
	
}
int ser(int n){if(n<1){
	return 0;
}else{

	return n+ser(n-1);}
	
}
int fab(int n){if(n<=1){
	return 1;
}else{

	return fab(n-2)+fab(n-1);}
	
}

int main(){
	int m;
	cout <<"enter number ";
	cin>>m;
	cout<<"factorial of "<<m<<" is "<<fact(m)<<endl;
	cout<<"series  of "<<m<<" is "<<ser(m)<<endl;
	cout<<"fabonachi series  of "<<m<<" is "<<fab
	(m)<<endl;
	return 0;
}
