#include<iostream>
using namespace std;

int main()
{ //upper wala
    for (int x=1; x<=9; x++) {
        for(int y=8; y>=x-1; y--) {
            cout << "  " ;
        }
        for(int y=1; y<=x; y++) {

            if  (y==1) {
                if(x%2==0) {
                    cout << " *" ;
                }
                else {
                    cout << " -" ;
                }
            } else if(y==3){
            
           if(x%2==0) {
                    cout << " -" ;
                }
                else {
                    cout << " *" ;
                }
            }
            else  {
                cout<<"  ";
            }
        }
        for(int a=1;a<x;a++) {
        if  (a==x-1) {
                if(x%2==0) {
                    cout << " *" ;
                }
                else {
                    cout << " -" ;
                }
            } else if(a==x-3){
            
           if(x%2==0) {
                    cout << " -" ;
                }
                else {
                    cout << " *" ;
                }
            }
            else  {
                cout<<"  ";
            }
        }
        cout << "" << endl;
    }
    
    
    //beech wala
    
    for(int a=1;a<5;a++) {
    for(int b=1;b<3;b++) {
    if(b%2==0){
    cout << "  " ;} else{
                  if(a%2==0)  {cout << " -" ;
                }
                else {
                    cout << " *" ;
                }
    }}
    for(int b=1;b<3;b++) {
    if(b%2==0){
    cout << "  " ;} else{
                  if(a%2==0)  {cout << " * " ;
                }
                else {
                    cout << " - " ;
                }
    }
    
    }
    
    for(int b=4;b>=a;b--) {
    cout << " *" ;}
    
    for(int b=1;b<=a;b++) {
    cout <<" " <<b ;
    }
    for(int b=1;b<=a;b++) {
    if(a-b>0) 
    {cout <<" "<<a-b; }
}
 
 
 
 for(int b=4;b>=a;b--) {
    cout << " *" ;}
 
 
 for(int b=1;b<3;b++) {
    if(b%2==0){
    cout << "  " ;} else{
                  if(a%2==0)  {cout << "    *" ;
                }
                else {
                    cout << "    -" ;
                }
    }}
    for(int b=1;b<3;b++) {
    if(b%2==0){
    cout << "  " ;} else{
                  if(a%2==0)  {cout << " -" ;
                }
                else {
                    cout << " *" ;
                }
    }
    
    }
 
    
    cout << "" << endl;
 }  
 
 //lower half
 
 
 for(int a=1;a<=5;a++) {
    for(int b=1;b<3;b++) {
    if(b%2==0){
    cout << "  " ;} else{
                  if(a%2==0)  {cout << " -" ;
                }
                else {
                    cout << " *" ;
                }
    }}
    for(int b=1;b<3;b++) {
    if(b%2==0){
    cout << "  " ;} else{
                  if(a%2==0)  {cout << " * " ;
                }
                else {
                    cout << " - " ;
                }
    }
    
    }
    
    for(int b=1;b<a;b++) {
    cout << " *" ;}
    
    int f=1;
    for(int b=5;b>=a;b--) {
    cout <<" " <<f ;
    f++;
    }
    int l=f-2;
    for(int b=4;b>=a;b--) {
    if(a==1) 
    {cout <<" "<<l;}else{
    
    cout<<"  ";}
    l--;}

 
 
 
 for(int b=1;b<a;b++) {
    cout << " *" ;}
 
 
 for(int b=1;b<3;b++) {
    if(b%2==0){
    cout << "  " ;} else{
                  if(a%2==0)  {cout << "    *" ;
                }
                else {
                    cout << "    -" ;
                }
    }}
    for(int b=1;b<3;b++) {
    if(b%2==0){
    cout << "  " ;} else{
                  if(a%2==0)  {cout << " -" ;
                }
                else {
                    cout << " *" ;
                }
    }
    
    }
 
    
    cout << "" << endl;
 }  
   
 
 //nichay wala
 for (int x=1; x<=9; x++) {
        for(int y=1; y<x; y++) {
            cout << "  " ;
        }
       
        
        for(int y=9; y>=x; y--) {

            if  (y==9) {
                if(x%2==0) {
                    cout << " *" ;
                }
                else {
                    cout << " -" ;
                }
            } else if(y==7){
            
           if(x%2==0) {
                    cout << " -" ;
                }
                else {
                    cout << " *" ;
                }
            }
            else  {
                cout<<"  ";
            }
        }
        
        
        
        
        for(int a=9;a>=x;a--) {
        if  (a==x+1) {
                if(x%2==0) {
                    cout << "  *" ;
                }
                else {
                    cout << "  -" ;
                }
            } else if(a==x+3){
            
           if(x%2==0) {
                    cout << " -" ;
                }
                else {
                    cout << " *" ;
                }
            }
            else  {
                cout<<"  ";
            }
        }
        
        
        
        cout << "" << endl;
    }
    
 

    return 0;
}