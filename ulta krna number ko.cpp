
//Q1

#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter number: " << endl;
    cin >> n;
    while(n>0){
    int z=n%10;
    cout <<z;
    n=n/10;
    }
    return 0;
}