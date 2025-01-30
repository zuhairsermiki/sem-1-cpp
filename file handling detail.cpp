
using namespace std;
#include<iostream>
#include<sstream>
#include<fstream>
// using namespace std;
int main (){
    cout<<"\t\t\t\t____________________\n\t\t\t\tfile handling in detail\n\n\n";

ifstream na;
string f[10];
string p;
na.open("acbgiki.txt");
// p<<na.rdbuf();
// string l=p.str();
// cout<<l;
int i=0;
string sum;
p="";
while(na){
    
getline(na,p);
p=p+"\n";

cout<<p;
sum+=p+"\n";
cout<<"----------------------------- "<<i<<endl ;
// cout<<sum;
i++;
}
cout<<i-1<<endl;
int n=0;
cout<<"whole file detail\n";

// cout<<sum;
na.close();
cout<<sum;

return 0;
}