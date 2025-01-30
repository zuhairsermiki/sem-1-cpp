#include<iostream>
using namespace std;

int main()
{
    int x;
    cout << "enter rows :" << endl;
    cin >> x;
   for(int i=1;i<=x;i++)
    { 
       for(int j=1;j<=x-i;j++)
       {
         cout << " ";
       }
        for(char k ='A';k<'A'+i;k++){
       
       
        
        cout<<k;
        
        
        
        
    }
    for(char k='A'+i-2;k>='A';k--)
    { cout  <<k;
    }
     
    
    
    
    cout << endl;
    }
    return 0;
    }