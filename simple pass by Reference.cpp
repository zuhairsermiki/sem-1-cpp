#include<iostream>
using namespace std;
void hello(int* x, int* y)
{   int cha= *x;

    *x = *y;
    *y= cha;


}
void hi(int &p, int &q)
{
    int Chu= p;
    p=q;
    q=Chu;

}
int call(int &p, int &q)
{
    
    for (int chut=p; chut<q;chut++){
    return chut;
    
    }
    return p;
}
int main()
{
    int a=15, b=34;
    cout<<" simple pass:"<<a<<" "<<b<<endl;
    hello(&a, &b);
    cout<<" pass by Reference pointer: "<<a<<" "<<b<<endl;
    int s=35, t=43;
    cout << "without " <<"s "<<s<<" t "<<t<<endl;
    hi(s,t) ;
    cout << "pass by Reference " <<s<<" "<<t<<endl;
    int l=10, m=20;
    cout << "without " <<"s "<<l<<" t "<<m<<endl;
    call(l,m) ;
    cout << "return pass by Reference " <<l<<" "<<m<<endl;
    return 0;
}