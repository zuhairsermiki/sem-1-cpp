
#include <iostream>
#include <string>
using namespace std;
int main(){
	
		int arr[4]={1,2,3,4};
		cout<<"arr[]={1,2,3,4}\n";
		int *x=arr;
		for (int i=1;i<=4;i++){
		
	    
		cout<<*x<<" ";
		x=arr+i;
		
		}
int a=4;
int *b=&a;
//string c=b;
//cout<<"c :"<<c;
cout <<" a :"<<a<<endl;
cout <<" *b :"<<*b<<endl;
cout <<" b :"<<b<<endl;

int ** c=&b;
cout <<" **c :"<<**c<<endl;
cout <<" *c :"<<*c<<endl;
cout <<" c :"<<c<<endl;
	return 0;
}
