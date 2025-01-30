
#include<iostream>
using namespace std;
int main(){
int student =1000;
int arr[1000];
for (int i=0;i<=1000;i++){
    arr[i]=1;
}
for (int i=2;i<=1000;i++){
    for (int j=i;j<=1000;j+=i){
       
        if(arr[j-1]==1){
            arr[j-1]=0;
        } else if(arr[j-1]==0){
            arr[j-1]=1;
        }
     
    }
}
int x=0;
for (int i=0;i<=1000;i++){
    if(arr[i]==1){
        x=x+1;
    }
}
cout<<"number of locker open is "<<x<<endl;
    return 0;
}