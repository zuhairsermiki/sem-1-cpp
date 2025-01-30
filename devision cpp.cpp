#include<iostream>
using namespace std;
int main(){
   int num;
   cout << "enter number" << endl;
   cin >> num;
   if(num%2==0){
   cout << "number divisible by 2: " <<endl;
   if(num%4==0){
   cout << "number divisible by 4: " <<endl;}
   else{cout << "number is not divisible by 4: " <<endl;}}
   else{cout << "number is not divisible by 2: " <<endl;
   }
    
     
     
    return 0;
}