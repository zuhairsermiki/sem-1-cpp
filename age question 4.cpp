#include<iostream>

using namespace std;
int main (){
    double years;
    double months;
    int days;
    cout << "enter your age in years" << endl;
    cin >> years;
    months=years*12;
    cout << "your age is: " << months <<"months" <<endl;
    days=years*365;
    cout << "your age is: " << days <<"days" <<endl;
    
return 0;
  }
  