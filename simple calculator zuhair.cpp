#include<iostream>
using namespace std;
int main(){
   double num1, num2, ans;
   char operation;
   cout << "num1" << endl;
   cin >> num1;
   cout << "choose operation(+,-,/,*)" << endl;
   cin >>operation;
   
     cout << "num2" << endl;
     cin >> num2;
    if(operation=='+'){
     ans=num1+num2;
     cout <<"answer"<<ans<<endl;
     }
     else if (operation=='-'){
     ans=num1-num2;
     cout <<"ans"<<ans<< endl;
     }
     else if (operation=='/') {
     ans=num1/num2;
     cout <<"ans"<< ans << endl;
     }
     else if (operation=='*'){
     ans= num1*num2;
     cout <<"ans"<< ans<< endl;
     }
     else{
     cout << "error" << endl;
     }
     
    
     
     
    return 0;
}