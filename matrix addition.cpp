#include <iostream>
using namespace std;
int main(){
	int m,n;
	cout<<"enter number of rows :";
	cin>>m;
	cout<<"enter number of column :";
	cin>>n;
	
	int matrix[m][n];
	int matrix1[m][n];
	cout<<"enter values of matrix 1 : ";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>matrix[i][j];
		}
		
	}
	
	cout<<"enter values of matrix 2 : ";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>matrix1[i][j];
		}
		
	}
	cout<<"matrix 1"<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<matrix[i][j]<<"  ";
		}
		cout<<endl<<endl;
	}
	cout<<"matrix 2"<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<matrix1[i][j]<<"  ";
		}
		cout<<endl<<endl;
	}
	int sum[m][n];
	
	cout<<"sum of matrices is :"<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			sum[i][j]=matrix1[i][j]+matrix[i][j];
			cout<<sum[i][j]<<"  ";
		}
		cout<<endl<<endl;
	}
	
	
	
	
	return 0;
}
