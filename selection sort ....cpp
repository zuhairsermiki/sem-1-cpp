#include <iostream>
using namespace std;


void printarray(int array[], int n);

void insertion(int array[], int n) {
	for(int i=0;i<n-1;i++){
	int si=i;
		for (int j=i+1;j<n;j++){
			if(array[j]<array[si]){
				swap(array[j],array[si]);
			}
		}
		cout<<"after shift"<<i+1<<"\t";
	printarray(array,n)	;
	} cout<<"Sorted array: ";
printarray(array,n)	;	
}

void printarray(int array[], int n) {
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 6;
	int m=1; 
    int arr[n] = {5, 3, 6, 23, 34, 2};
	 cout <<"original array:  ";
	 printarray(arr,n);
    insertion(arr, n);
    return 0;
}

