#include<iostream>
using namespace std;
int factorial(int s){
int fact=1;
for(int j= 1;j<=s;j++){
fact*=j;}
return fact;
}
int nPr(int a, int b){
int fact_n=factorial(a);
int fact_r=factorial(b);
return fact_n/fact_r;

}
int main()
{
int n,r;
cout << "enter 'n':" << endl;
cin >> n;
cout << "enter 'r':" << endl;
cin >> r;

    cout << "permutation is:"<<nPr(n, r) <<endl;
    return 0;
}