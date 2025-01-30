#include <iostream>
using namespace std;
int main(){
	int arr[2][2]={{1,2},{4,3}};
//	int * x=arr;
	for(int i=0;i<4;i++){
	cout<<**(arr+i);	
		
	}
	
	return 0;
}
