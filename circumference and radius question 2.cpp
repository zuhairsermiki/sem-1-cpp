#include<iostream>
using namespace std;
int main (){
 double R;
 double circumference,area;
 const double π=3.14;
  cout << "enter radius of sphere" << endl;
  cin >> R;
  circumference=4*π*(R*R*R) /3;
  area=4*π*(R*R);
  cout<<"circumference of sphere is :"<<circumference<<" square unit"<<endl;
  cout<<"area of sphere is :"<< area <<"cubic unit"<< endl;
  
return 0;
  }
  