#include<iostream>
using namespace std;
int main(){
     
     int n=11;
     for(int x =0;x<=3;x++)
     {  
        for(int j=0;j<=x;j++)
        {
         cout<<n;
        n++;
        
        /* int y=11;
         while(y<16)
         { 
            cout <<y << endl;*/
           if(x>j)
             {  cout << "<" ;
             }
             
             
             
         
        
     }
     cout  << endl;
     }
    int z;
     cout << "enter z" << endl;
     cin >> z;
    for(int p=1;p<=z;p++) {
      for (int j=1;j<=z;j++) {
     
     if(p+j==z+1||p==1||p==z){
     
     cout << " z" ;
     }else{
     cout << "  " ;
     
     
     }
     } cout << "" << endl;
     }
    

    
    return 0;
}
    