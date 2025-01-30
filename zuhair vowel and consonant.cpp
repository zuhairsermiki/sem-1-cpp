#include<iostream>
using namespace std;
int main() {
    char character;
    cout<<"enter a character";
    cin>>character;
    if(character=='a'
    ||character== 'e'
    ||character== 'i'
    ||character== 'o'
    ||character== 'u')
     {
    cout<<character<<"is vowel"<<endl;
    }else{
    cout<<character<<" is consonant"<<endl;
    }
    return 0;
    }