#include<iostream>
#include<fstream>

using namespace std;
int main(){
    cout<<"seekp seekg tellp tellg\n";
    string la,ga;
    la="zuhair hussain";
 ofstream file("seekteelp.txt");
 file<<"12345678";
 file.seekp(4);
 file<<"zuh";
 file.close();
 ifstream fil("seekteelp.txt");
 
 fil.seekg(0,ios::cur);
 fil>>ga;
 cout<<" seek g : "<<ga<<endl;
 fil.close();
 
    return 0;
}
