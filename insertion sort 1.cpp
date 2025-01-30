#include <iostream>
using namespace std;


void printarray(char array[], int n);

void insertion(char array[], int n,int m) {
	if(m==n){
		
		return;
	}else {
		 char curr=array[m];
		 int prev=m-1;
		for(;prev>=0&&array[prev]>curr;prev--){
			array[prev+1]=array[prev];
			
		}
		array[prev+1]=curr;
		printarray(array,n);
	}
	
    insertion(array,n,m+1);
	
    
}

void printarray(char array[], int n) {
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 6;
	int m=0; // Corrected size
    char arr[n] = {'a','c','b','l','d','e'}; // Matches siz'e of array
   
    insertion(arr, n,m);
    return 0;
}

