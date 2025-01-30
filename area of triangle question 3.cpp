#include<iostream>
#include<math.h>
using namespace std;
int main (){
   double a, b, c, s;
   double area;
 
    cout << "enter lengths of side of triangle." << endl;
    cout << "enter a:" << endl;
    cin >> a;
    cout << "enter b:" << endl;
    cin >> b;
    cout << "enter c:" << endl;
    cin >> c;
    s=(a+b+c)/2;
    if((a+b>c)&&(a-b<c) ) {
    
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    
    cout<<"area of triangle is :"<< area <<"square unit"<< endl;}
    else{
    cout<<"the given lines are not a sides of triangle ";}
  
return 0;
  }
  