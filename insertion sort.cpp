#include<iostream>
using namespace std;
void printarray(int array[],int n){
	for(int i=0;i<n;i++){
		cout<<array[i]<<",";
	}
cout<<endl;	
}
void insertionsort(int array[],int n){
	
	for(int i=1;i<n;i++){
		char l='a';
		for(int j=0;j<i;j++){
			
			for(int a=j;a>=0;a--){
			
			if(array[i]<array[a]){
				
				swap(array[i],array[a]);
			}
		}
			
	}
   cout<<"case "<<i<<"\t";
	printarray(array,n);	
	}
	
	cout<<"\n\nSorted array"<<endl; 	
	printarray(array,n);
}
int main(){ 
int n=6;
int arr[n]={5,73,61,23,3,2};
cout<<"arr[n]={5,73,61,23,3,2}"<<endl;
insertionsort(arr,n);
	return 0;
}
