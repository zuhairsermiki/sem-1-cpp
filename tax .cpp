#include<iostream>
using namespace std;
int main() {
    double salary,tax;
    cout<<"enter an annual salary  "<<endl;
    cin >> salary;
    if (salary<50000) {
      tax=0  ;
    } else if (salary<=100000){
    tax=salary*0.10;
    }else if(salary<=150000){
    tax=salary*0.20;
    }
    else  {
    tax=salary*0.30;
    }cout << "the tax amount is:$"<<tax << endl;
    return 0;
}