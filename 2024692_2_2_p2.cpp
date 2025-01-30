#include<iostream>
using namespace std;
int main( ) {

    for(int a=1; a<=3; a++) {

        for( int b=1; b<=31; b++) {
            cout << " " ;
        }
        for( int b=1; b<=7; b++) {
            if(a==1||b==1||b==7) {
                cout << "*" ;
            }
            else {
                cout << " " ;
            }
        }
        cout << "" << endl;
    }

    for(int a=1; a<=3; a++) {

        for( int b=1; b<=25; b++) {
            cout << " " ;
        }
        for( int b=1; b<=7; b++) {
            if(a==1||b==1) {
                cout << "*" ;
            }
            else {
                cout << " " ;
            }
        }
        for(int b=1; b<7; b++) {
        if(b==6) {
            cout << "*" ;
        } else {
            cout << " ";}
        }
        cout << "" << endl;
    }
    
    
    for(int a=1; a<=3; a++) {

        for( int b=1; b<=19; b++) {
            cout << " " ;
        }
        for( int b=1; b<=7; b++) {
            if(a==1||b==1) {
                cout << "*" ;
            }
            else {
                cout << " " ;
            }
        }
        for(int b=1; b<13; b++) {
        if(b==12) {
            cout << "*" ;
        } else {
            cout << " ";}
        }
        cout << "" << endl;
    }
    for(int a=1; a<=3; a++) {

        for( int b=1; b<=13; b++) {
            cout << " " ;
        }
        for( int b=1; b<=7; b++) {
            if(a==1||b==1) {
                cout << "*" ;
            }
            else {
                cout << " " ;
            }
        }
        for(int b=1; b<19; b++) {
        if(b==18) {
            cout << "*" ;
        } else {
            cout << " ";}
        }
        cout << "" << endl;
    }
    
    for(int a=1; a<=3; a++) {

        for( int b=1; b<=7; b++) {
            cout << " " ;
        }
        for( int b=1; b<=7; b++) {
            if(a==1||b==1) {
                cout << "*" ;
            }
            else {
                cout << " " ;
            }
        }
        for(int b=1; b<25; b++) {
        if(b==24) {
            cout << "*" ;
        } else {
            cout << " ";}
        }
        cout << "" << endl;
    }
    for(int a=1;a<=38;a++){
    cout << "*" ;
    }
    
    



    return 0;
}