#include <iostream>
using namespace std;
void printarray(int array[],int n){
	cout<<"{ ";
for(int i=0;i<n;i++){
 		
 		cout<<array[i]<<" ";
 		if(i<n-1){
 			cout<<",";
		 }
	 }
	 cout<<" }";		
}
void insertion(int arr[],int n){
	for(int i=1;i<n;i++){
 		
 		int * curr=arr;
 		int j=i-1;
 		 for (;j>=0&&curr>curr-j;j--){
 			curr-j+1=curr-j;
		 }
		 curr-j=curr;
	 
//	 cout<<"case :"<<i<<endl;
	 printarray(arr,n);
	 
	 }
	
}
int main(){
	int n;
	cout<<"enter number of student : ";
	cin>>n;
	int arr[n];
	cout<<"enter marks of students :"<<endl;
 	for(int i=0;i<n;i++){
 		
 		cin>>arr[i];
	 }
	 printarray(arr,n);
	 insertion(arr,n);	
	return 0;
}
