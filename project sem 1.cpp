#include<iostream>
#include<string>
#include<fstream>
using namespace std;


void NA_1(string vot);
void NA_2(string vot);
void poll();                                                           //recursive
void resultna1();
void resultna2();
void polldep();
void retn();
void repoll();
void dlt(string i,string j);



int main(){
	int n;
	char retry;
	do{cout<<"\n\n\t\t__________________________________________________________\n\n";
		cout <<"\t\t\t\tenter(0,1) \n\t\t\t\t 0 if you votter \n\t\t\t\t 1 if you are from polling department \n\n";   
		cout<<"\t\t__________________________________________________________\n\n";
	    cin>>n;
	if (n==1||n==0){
	switch(n){		                       //0 for poll func
		case 0:                            //1 for polldepartment func
			
			poll();
			break;
	    case 1:
	    	cout <<" \t\t\t\tare you from polling department \n";
	    	polldep();
	    	break;	    
	}
	retry='n';
	}else {cout<<"\n\n\n\t\t__________________________________________________________\n";
		cout <<"\t\t\t\tyou enter a wrong credentials! \n\t\t\t\t are you want to try again! (y/n)\n";
		cout<<"\t\t__________________________________________________________\n\n";
	cin>>retry;
	
}
}while(retry== 'Y'||retry=='y');
	return 0;
}




void NA_1(string vot){
	cout<<"\n\n\t\t__________________________________________________________\n";
    string ctd;
    char retry;
    cout<<"you are in NA_1:\n";
    cout<<"\t\t\tselect the candidate whose you want to give \nyour vote\n";
do{
    cout<<"\t\t\t shaqoli"<<endl;
    cout<<"\t\t\t maqoli"<<endl;
    cin>>ctd;

if(ctd=="shaqoli"){
	                ofstream sha("na1c1.txt",ios::app);
	                sha<<vot;
	                
	                cout<<"\t\t\t\tyou voted to shaqoli:\n";

				retn();

}
else if(
	    ctd=="maqoli"){
		ofstream ma("na1c2.txt",ios::app);
	    ma<<vot;
	    
	    cout<<"\t\t\t\tyou voted to maqoli:\n";

        retn();

}
else {
	    cout<<"\n\n\n\t\t__________________________________________________________\n";
		cout <<"\t\t\t\tyou enter a wrong credentials! \n\t\t\t\t if you want to try again! (y)\n";
		cout<<"\t\t__________________________________________________________\n\n";
	    cin>>retry;
}

}while(retry== 'Y'||retry=='y');

}

void NA_2(string vot){
	cout<<"\n\n\t\t__________________________________________________________\n";
    string ctd;
    char retry;
    cout<<"you are in NA_2:\n";
    cout<<"\t\t\tselect the candidate whose you want to give \nyour vote\n";
do{
    cout<<"\t\t\t mali"<<endl;
    cout<<"\t\t\t qoli"<<endl;
    cin>>ctd;

if(ctd=="mali"){
	                ofstream sha("mali.txt",ios::app|ios::in);
	                sha<<vot;
	                
	                cout<<"\t\t\t\tyou voted to mali:\n";
                
				retn();
}
else if(
	    ctd=="qoli"){
	    ofstream ma("qoli.txt",ios::app|ios::in);
	    ma<<vot;
	    
	    cout<<"\t\t\t\tyou voted to qoli:\n";
        retn();

}
else {
	    cout<<"\n\n\n\t\t__________________________________________________________\n";
		cout <<"\t\t\t\tyou enter a wrong credentials! \n\t\t\t\t if you want to try again! (y)\n";
		cout<<"\t\t__________________________________________________________\n\n";
	    cin>>retry;
}

}while(retry== 'Y'||retry=='y');

}


void poll(){
	
	 string n;
     string nam;
     string cnic;
     string vot;
	
	while(!(n=="NA_1"||n=="NA_2")){
	                   	cout<<"\n\n\t\t__________________________________________________________\n";

		                cout <<" \t\t\t\tpolling centre ma khusamdeed\n";

                        cout<<"\n\t\t__________________________________________________________\n";

	
                        cout<<"\t\t\t\t ENTER:\n \t\t\t\tYOUR FULL NAME :\n";


                        getline(cin,nam);
					    
                        getline(cin,nam);

                        cout<<"\t\t\t\t your CNIC number :\n";

                        getline(cin,cnic);

                        cout<<nam;

                        vot=nam+"("+cnic+")\n";
                        cout<<vot<<endl;




                        cout<<"\t\t__________________________________________________________\n";
		                cout<<"\t\t\t\t enter your halqa number :\nNA_1:\nNA_2\n";
	                 	cout<<"\t\t__________________________________________________________\n";
		                cin>>n;
                        if(n=="NA_1"){

								NA_1(vot);
								
                                     }
                        else if(n=="NA_2"){
	                                      NA_2(vot);
		                                         }
						else{
	                        cout<<"\n\n\t\t__________________________________________________________\n";
                            cout<<"\t\t\t\t!Error ,YOU ENTER WRONG CREDENTIALS\n \t\t\t\tIF YOU WANT TO TRY AGAIN ENTER (Y)\n \t\t\t\telse press any other key to exit:\n";
	                    	cout<<"\t\t\t__________________________________________________________\n";
		                 	char error ;
		                 	cin>>error;
		                	if(!(error=='y'||error =='Y')){
			                                            	break;
			                                              }
	
                            }
	            }
}


void resultna1(){
cout<<"...........RESULT OF NA-1.............\n";
string sh;
string sum1="";
string sum2="";
int s=0;
string ma;
int m=0;
ifstream sha("na1c1.txt");
while(sha){
	getline(sha,sh);
	sum1=sum1+sh+"\n";
s++;                                        //tracks vote count
}
ifstream maq("na1c2.txt");
while(maq){
	getline(maq,ma);
	sum2=sum2+ma+"\n";
m++;                                       //tracks vote count
}
if(m>s){

	cout<<"Maqoli won the eletion from "<<m-s-2<<" vote."<<endl;

} else if(s>m){

cout<<"Shaqoli won the eletion from "<<s-m-2<<" vote."<<endl;

}else{
	cout<<"maqoli and shaqoli get the same number of vote:  ..."<<endl;

}
cout<<"total number of vote cast in this election is :"<<s+m<<endl;
cout<<"total number of vote to shaqoli is :"<<s-1<<endl;
cout<<"total number of vote to maqoli is :"<<m-1<<endl;

cout<<"if you want to check the list of total number of voter then type y/Y "<<endl;
char c;
cin>>c;
if(c=='y'||c=='Y'){
	cout<<"..........................................................."<<endl;
	cout<<" \n\n\t\tlist of voter of shaqoli is ..\n"<<endl;
	cout<<sum1;
	cout<<"\n................................................\n";
		cout<<"\n\n\t\t list of voter of maqoli is ..\n"<<endl;
	cout<<sum2;
}
}

void resultna2(){


	cout<<"...........RESULT OF NA-2.............\n";
string qo;
string sum1="";
string sum2="";
int s=0;
string ma;
int m=0;
ifstream qol("qoli.txt");
while(qol){
	getline(qol,qo);
	sum1=sum1+qo+"\n";
s++;
}
ifstream mal("mali.txt");
m=0;
while(mal){
	getline(mal,ma);
	sum2=sum2+ma+"\n";
m++;
}
if(m>s){

	cout<<"mali won the eletion from "<<m-s-2<<" vote."<<endl;

} else if(s>m){

cout<<"qoli won the eletion from "<<s-m-2<<" vote."<<endl;

}else{
	cout<<"mali and qoli get the same number of vote:  ..."<<endl;

}
cout<<"total number of vote cast in this election is :"<<s+m<<endl;
cout<<"total number of vote to qoli is :"<<s-1<<endl;
cout<<"total number of vote to mali is :"<<m-1<<endl;

cout<<"if you want to check the list of total number of voter then type y/Y "<<endl;
char c;
cin>>c;
if(c=='y'||c=='Y'){
	cout<<"..........................................................."<<endl;
	cout<<" \n\n\t\tlist of voter of qoli is ..\n"<<endl;
	cout<<sum1;
	cout<<"\n................................................\n";
		cout<<"\n\n\t\t list of voter of mali is ..\n"<<endl;
	cout<<sum2;
}

	
}
void retn(){
	char rtn;
				cout<<"enter\n y/Y to continue votting \n enter m/M to return to menu\n";
				cin>>rtn;
				if(rtn=='y'||rtn=='Y'){
					poll();
				}	else if (rtn=='m'||rtn=='M'){

					main();
				}
}

void polldep(){
	int  pass;
	
	
	
	cout<<" \t\t\t\tenter password \n";
	cin>>pass;
	if(pass==1234){
		cout <<"\t\t\t\tenter \n";
		cout<<"\t\t\t\t\t 1 check result of NA_1\n";
		cout<<"\t\t\t\t\t 2 check result of NA_2\n";
		cout<<"\t\t\t\t\t 3 delete or retake a poll\n";
		int check;
		char error ;
		do{
		cin>>check;
		switch(check){
        case 1:
		cout<<" result of NA_1:  ";
        resultna1();


		break;
		case 2:
		cout<<" result of NA_2: ";
		resultna2();
		break;
		case 3:
		repoll();
		break;

		default:
		cout<<"you enter a wrong credentials \n";
		cout<<"if you want to try again enter Y/y\n";
		cout<<" enter ...........\n";
		
		cin>>error;


		}
		}while(error=='y'||error=='Y');

	}else {
		cout <<" you entered a wrong password!\n for retry enter y/Y\n";
		char g;
		cin>>g;
		if(g=='y'||g=='Y'){
			polldep();
		}

	}
}

void repoll(){
	int r;
	string c1;
	string c2;
	
cout<<" ................ you wnat repolling............  ";
cout<<"\nenter \n 1 for revotting in consitituency NA_1\n2 for revotting in constituency NA_2 \n";
cout<<"3 for revotting in both constituency\n\n";
cin>>r;
switch(r){
case 1:


c1="na1c1";
c2="na1c2";
 dlt(c1,c2);
cout<<" ..................NA-1 READY FOR NEW POLL.........\n\n";
break;
case 2:
c1="qoli";
c2="mali";
 dlt(c1,c2);
cout<<" ..................NA-2 READY FOR NEW POLL.........\n\n";


break;
case 3:
c1="na1c1";
c2="na1c2";
 dlt(c1,c2);
 c1="qoli";
c2="mali";
 dlt(c1,c2);
cout<<"YOU DELETED THE ALL VOTE OF BOTH CONSTITUENCIES\n\n";
cout<<" ..................both NA_1 and NA-2 READY FOR NEW POLL.........\n\n";
break;
default:
cout<<"you enter a wrong credentials \n";
cout<<"if you want try again then enter 11 ";
cin>>r;
if(r==11)
{
	repoll();
}

}

}


void dlt(string i, string j ){
	
	
ofstream pa(i+".txt",ios::trunc);

ofstream ja(j+".txt",ios::trunc);
if(ja.is_open()&&pa.is_open()){
	cout<<"you deleted the previous votes successfully\n";
	ja.close();
}

	
} 

