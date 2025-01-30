#include<iostream>
using namespace std;
void printarray(int array[],int n){
	for(int i=0;i<n;i++){
		cout<<array[i]<<",";
	}
cout<<endl;	
}
void bubblesort(int array[],int n){
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(array[j]>array[j+1]){
				
				swap(array[j],array[j+1]);
			}
			
		
	}
		
	}
	cout<<"with loop"<<endl;
//	printarray(array,n);
}
void  bubblerec(int array[],int n,int m){
	if(m==6){
		return ;
	}
	
		for(int j=0;j<n-m;j++){
			if(array[j]>array[j+1]){
				
				swap(array[j],array[j+1]);
     		}
			
			
	}
		
	cout<<"with recursion "<<endl;
	

printarray(array,n);
bubblerec(array,n,m+1);
}

int main(){ 
int n=6;
int m=1;
int arr[n]={5,30,6,23,34,2};
cout<<"arr[n]={5,3,6,23,34,2}"<<endl;

	bubblerec(arr,n,m);
	return 0;
}
