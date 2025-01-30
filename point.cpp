#include<iostream>
using namespace std;
int main(){
	
	int arr[4]={54,65,69,42};
	int *b=arr;
	for(int a=0;a<4;a++){
		
		for(int c=0;c<4-a;c++){
			if(*(b+a)>*(b+c) ){
				swap(*(b+a),*(b+c));
			} cout<<*b<<" ";
		}
	}
	cout<<*b;
	
}
