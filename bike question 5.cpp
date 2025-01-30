#include<iostream>

using namespace std;
int main (){
    double petrol70,petrol125;
    double distance;
    
    cout << "enter distance in KM:" << endl;
    cin >> distance;
    petrol70=distance/50.2;
    
    cout << "petrol required for CD70 bike to travel this distance is : "
     << petrol70 <<"liters" <<endl;
    petrol125=distance/40.50;
    cout << "petrol required for CD125 bike to travel this distance is :"
    <<petrol125 << "liters"<<endl;
    
return 0;
  }
  