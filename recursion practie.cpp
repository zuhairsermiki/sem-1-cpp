#include <iostream>
using namespace std;


void printarray(int array[], int n);

void insertion(int array[], int n,int m) {
	if(m==n){
		
		return;
	}else {
		 int curr=array[m];
		 int prev=m-1;
		for(;prev>=0&&array[prev]>curr;prev--){
			array[prev+1]=array[prev];
			
		}
		array[prev+1]=curr;
		printarray(array,n);
	}
	
    insertion(array,n,m+1);
}
void selection(int array[], int n,int m) {
	if(m==n-1){
		
		return;
	}else { int si=m;
	for(int j=m;j<n;j++){
		
		if (array[j]<array[si]){
			swap(array[j],array[si]);
		}
	}
	cout<<"selection sort :";
	printarray(array,n);
	}
	
    selection(array,n,m+1);
}

void printarray(int array[], int n) {
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 6;
	int m=0; 
    int arr[n] = {5, 3, 6, 23, 34, 2}; // Matches size of array
    printarray(arr,n);
//    insertion(arr, n,m);
    selection(arr, n,m);
    return 0;
}

