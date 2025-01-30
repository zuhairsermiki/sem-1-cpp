#include<iostream>
using namespace std;
void apo(int a,int arr[][3]){
//	int a;
	for(int i=0;i<a;i++){
		
		for(int j=0;j<3;j++){
		//int arr[i][j];
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
	}
}

int main (){
	int l,m;
	cin>>l;
//	cin>>m;
    int	array[l][3]={{1,2,3},{4,5,6},{7,8,9}};
//    for(int i=0;i<m;i++){
//		
//		for(int j=0;j<l;j++){
//		//int arr[i][j];
//		cout<<array[i][j]<<" ";
//	}
//	cout<<endl;
//	}
    apo(l,array);
	return 0;
}
