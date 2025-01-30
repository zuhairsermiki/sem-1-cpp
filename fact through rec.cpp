#include<iostream>
using namespace std;



int main(){
int a =5;
int b=10;

int *p1,*p2;
p1=&a;
p2=&b;
*p1=20;
*p1=*p2;
cout<<"    a   ;;;"<<a<<"    b:::::"<<b<<endl;
p1=p2;
*p1=20;
cout<<" A :"<<a<<"\n B :"<<b;


return 0;
}