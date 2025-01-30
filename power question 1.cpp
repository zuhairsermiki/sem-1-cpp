#include<iostream>
#include<math.h>
using namespace std;
int main (){   
    double base,exponent,result;
    
    cout << "enter base:" << endl;
    cin >> base;
    cout << "enter exponent:" << endl;
    cin >> exponent;
    result=pow(base, exponent);
    cout << "The answer is :" <<result<< endl;
return 0;
  }
  