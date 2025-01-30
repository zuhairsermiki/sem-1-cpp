#include<iostream>
using namespace std;
int main() {
    float percentage;
    
    cout<<"enter percentage of student";
    cin>>percentage;
    if(percentage >= 80){
    cout << "devision:distinction" << endl;
    }else if(percentage>=60) {
    cout << "devision:first devision" << endl;
    }else if(percentage>=50) {
    cout << "devision:second devision" << endl;
    }else if(percentage>=40) {
    cout<<"devision:third devision"<<endl;
    }else{cout << "devision: fail" << endl;
    }
    
    
     
    
    return 0;
    }