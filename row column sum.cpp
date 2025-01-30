#include <iostream>
using namespace std;
int main(){
	int m,n;
	cout<<"enter number of rows and column";
	cin>>m>>n;

	int matrix[m][n];
	
	cout<<"enter values of matrix 1 : ";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>matrix[i][j];
		}
		
	}
	cout<<" row sum of matrices:"<<endl;

	for(int i=0;i<m;i++){
		int rsum=0;
		for(int j=0;j<n;j++){
			cout<<matrix[i][j]<<" ";
			rsum+=matrix[i][j];
			
		}
			cout<<"	="<<rsum;
		cout<<endl;
		
	}

	for(int i=0;i<n;i++){
		int p =0;
		for(int j=0;j<m;j++){
			p+=matrix[j][i];
				
		}
		cout<<"sum of column  "<<i+1<<" is : ";
		cout<<p;
		cout<<endl;
		
	}
	if(m==n){int q;
	
		for(int i=0;i<n;i++){
		
		for(int j=0;j<m;j++){
			if(i==j){
		
			q+=matrix[j][i];
			}
		}
		
		
	}
	cout<<"sum of element of main diagonal is  : ";
		cout<<q;
	}
	return 0;
}
