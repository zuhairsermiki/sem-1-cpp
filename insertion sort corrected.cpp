#include <iostream>
using namespace std;

void printArray(int array[], int n) {
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void insertionSort(int array[], int n) {
    for(int i=1;i<n;i++){
    	
    	int curr= array[i];
    	int prev=i-1;
    	while ( prev>=0&&array[prev]>curr){
    		array[prev+1]=array[prev];
    		prev--;
		}	array[prev+1]=curr;
    printArray(array,n);	
	}
}

int main() {
    int n = 6;
    int arr[n] = {5, 73, 61, 23, 3, 2};

    cout << "Original array: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "\nSorted array: ";
    printArray(arr, n);

    return 0;
}
