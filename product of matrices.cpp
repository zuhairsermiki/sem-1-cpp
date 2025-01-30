#include <iostream>
using namespace std;
int main(){
//	int m,n;
//	cout<<"enter number of rows :";
//	cin>>m;
//	cout<<"enter number of column :";
//	cin>>n;
//	
	int matrix[2][2];
	int matrix1[2][2];
	cout<<"enter values of matrix 1 : ";
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cin>>matrix[i][j];
		}
		
	}
	
	cout<<"enter values of matrix 2 : ";
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cin>>matrix1[i][j];
		}
		
	}
	cout<<"matrix 1"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<matrix[i][j]<<"  ";
		}
		cout<<endl<<endl;
	}
	cout<<"matrix 2"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<matrix1[i][j]<<"  ";
		}
		cout<<endl<<endl;
	}
	int product[2][2]={0};
	int a[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
		for(int k=0;k<2;k++){
		
			 product[i][j]+=matrix[i][k]*matrix1[k][j];
		}
			
		}
	
	}
	cout<<"Product of matrix is"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<product[i][j]<<"  ";
		}
		cout<<endl<<endl;
	}
	return 0;
}
