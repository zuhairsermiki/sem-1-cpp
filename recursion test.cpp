#include<iostream>
using namespace std;
void printarray(int array[], int n) {
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}
void insertion(int array[],int a,int b){
	if(a<b){
		cout<<a<<b;
//	int	curr=array[a];
//	int prev =a-1;
//		for (int j=prev;j>=0&&curr<array[j];j--){
//			array[j+1]=array[j];
//			
//			
//		}
//		array[prev+1]=curr;
//		printarray(array,b);
//insertion(array,a+1,b);
		
	}
	
}
int main(){
	int n=1;
	int m=7;
	int arr[m]={34,43,21,4,27,6,15};
	insertion(arr,n,m);
	return 0;
}