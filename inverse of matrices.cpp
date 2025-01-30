#include <iostream>
using namespace std;
void mat(int arr[][2]){
	cout<<"matrix of values you enter."<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
		cout<<arr[i][j]<<"   ";	
	}
	
	cout<<endl<<endl;
	
	}
	
	int d=(arr[0][0]*arr[1][1])-(arr[0][1]*arr[1][0]);
	cout<<"determinent is : "<<d<<endl;
	
}
void adjt(int arr[2][2],int adj[2][2]){
	cout<<"adjoint of matrix is :"<<endl;
	int ad[2][2];
	ad[1][1]=arr[0][0];
	ad[0][0]=arr[1][1];
	ad[1][0]=-arr[1][0];
	ad[0][1]=-arr[0][1];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<ad[i][j]<<"   ";
			}
		cout<<endl<<endl;
	}
	
	
	cout<<endl;
	}
	
void inverse(int arr[2][2]){
	int d=(arr[0][0]*arr[1][1])-(arr[0][1]*arr[1][0]);
	
	if ( d==0){
		cout<<" INVERSE IS NOT POSSIBLE!";
	}else{
	
	cout<<"inverse of matrix is : "<<endl;
	int adj[2][2];
adjt(arr,adj);

	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<adj[i][j]/d<<"   ";
			}
		cout<<endl<<endl;
	}
	
	}
}



int main(){
	int array[2][2];
	cout<<"enter numbers "<<endl;
	cout <<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
		cin>>array[i][j];	
	}
	}
	mat(array);
	cout<<"--------------------------------"<<endl;
	inverse(array);
	mat(array);
	return 0;
}
