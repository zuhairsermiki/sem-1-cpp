#include<iostream>
using namespace std;
int main() {
    
     float number1,number2;
     char operation;
     float result;
     
     cout<<"enter first number ";
     cin>>number1;
     
     cout<<"enter operation:(+,-,*,/)";
     cin >> operation;
     cout<<"enter second number";
     cin >> number2;
     if(operation=='+'){
     result = number1 +number2;
     }else if(operation=='-'){
     result= number1-number2;
     }else if(operation=='*'){
     result=number1*number2;
     }else if(operation=='/') {
     result=number1/number2;
     }
     
     cout << "the result is "<<result << endl;
    return 0;
}