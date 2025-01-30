#include<iostream>
using namespace std;

int main()
{

    int n;
    cout<<"Enter number of rows:";
    cin>>n;
    for (int x=0;x<n;x++)
    {
    for(int y=n-1;y>=x;y--)
    {
    cout << " ";
    }
    for(int y=0;y<=x;y++) {
    cout << "*";}
   for(int y=1;y<=x;y++) {
    cout << "*";}
    
    cout << "" << endl;
    }//second half
   for (int x=0;x<n;x++)
    {
    for(int y=-1;y<=x;y++)
    {
    cout << " ";
    }
    for(int y=n-2;y>=x;y--) {
    cout<<"*";
    
    }
    for(int y=n-2;y>=x+1;y--) {
    cout<<"*";
    
    }
    
    cout << " " << endl;
    }
    
    
    
    
    
    return 0;
}