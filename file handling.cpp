#include <iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;
int main(){
// 	string p;
	
	
// 	string q;
//     fstream	na("NA_1register.txt",ios::app|ios::in|ios::out);
// 	getline(cin,p);
// 	na<<p;
	
// 	// na<<" you are very "+p<<"\n";
// 	getline(na,q);
// 	cout<<" q " <<q<<endl;
// 	na.close();
// 	q="";
// 	fstream la("NA_1register.txt",ios::in);
	
// //	la>>q;
// while(la){

//     getline(cin,q);
// 	cout<<q<<endl;
// }
// //	getline(la,q);
// //	cout<<q<<endl;
// 	la.close();
// //	cout<<"2"<<q<<endl;	

	 string n;
string nam;
string cnic;
string vot;
	
	while(!(n=="NA_1"||n=="NA_2")){
		cout<<"\n\n\t\t__________________________________________________________\n";

		cout <<" \t\t\t\tpolling centre ma khusamdeed\n";

cout<<"\n\t\t__________________________________________________________\n";

	
cout<<"\t\t\t\t ENTER YOUR FULL NAME :\n";
getline(cin,nam);



cout<<"\t\t\t your CNIC number :\n";
getline (cin,cnic);

cout<<nam;

vot=nam+"("+cnic+")\n";
cout<<vot;


cout<<"\t\t__________________________________________________________\n";
		cout<<"\t\t\t\t enter your halqa number :\nNA_1:\nNA_2\n";
		cout<<"\t\t__________________________________________________________\n";
		cin>>n;
if(n=="NA_1"){
//	NA_1(vot);

}
else if(n=="NA_2"){
	cout<<"NA_2";
		

}else{cout<<"\n\n\t\t__________________________________________________________\n";
cout<<"\t\t\t\t!Error ,YOU ENTER WRONG CREDENTIALS\n \t\t\t\tIF YOU WANT TO TRY AGAIN ENTER (Y)\n \t\t\t\telse press any other key to exit:";
		cout<<"__________________________________________________________\n";
			char error ;
			cin>>error;
			if(!(error=='y'||error =='Y')){
				break;
			}
	
}
	}



	return 0;
}