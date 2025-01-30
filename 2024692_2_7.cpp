#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main()
{
	float  m,x1=0,x2=0,x3=0,x4=0,sc=0,s=0,tb=0;
	cout<<fixed<<setprecision(2);
    char ch;
	do
	{
	cout<<"Enter the gallons of water you have consumed = ";
	cin>>m;
	if(m>=0)
	{
	if(m>100)
	x1=50*100;
	else
	x1=m*50;
	if(m>100)
{
	if(m>350)
	x2=100*250;
	else
	x2=(m-100)*100;
}    if(m>350)
{
	if(m>600)
	x3=250*150;
	else
	x3=(m-350)*150;
}   if(m>600)
{
	if(m>600)
	x4=250*(m-600);
}
	s=x1+x2+x3+x4;
	sc=s*0.14;
	tb=s+sc;
	cout<<" total bill is = "<<tb<<endl;
	cout<<"An additional service charge of 14% is also included in bill."<<endl;
	}
	else
	cout<<"Invalid input."<<endl;
	cout<<"For more calculations of bills:\n Press 'L' if you want : ";
	cin>>ch;
	cout<<"-------------------------------------------"<<endl;
	}
	while(ch=='L');
	return 0;
}