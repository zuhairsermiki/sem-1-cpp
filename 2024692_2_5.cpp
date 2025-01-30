#include<iostream>
#include<string>
#include<vector>
using namespace std;
unsigned int ACNO[100];
unsigned int  ACB[100];
int open_account(int &i)
{
  cout<<"Enter the amount you want to deposit in your account : ";
  cin>>ACB[i];
  if(ACB[i]>=0)
  {
  ACNO[i]=(1001+i);
  cout<<"Your account number is : "<<1001+i<<endl;
  cout<<"Your account balance is : "<<ACB[i]<<endl;
  i=i+1;
  }
  else
  {
    cout<<"Invalid amount.";
    i=i;
  }
return i;
}
int main()
{
    char c;
    int i=0;
    int close=0;
    int closed_account[close];  
    do
    {
        unsigned int ACNO1,ACB1;
      cout<<" Enter 'O' to open a bank account.\n Enter 'B' for balance inquiry. \n Enter 'D' to deposit money.\n Enter 'W' to withdraw money. \n Enter 'C' to close account.\n Enter 'I' to compute interest rate.\n Enter 'P' to print all account numbers and thier amounts.\n Enter 'E' to close all accounts and exit program.\n What type of transaction do you want :  ";
      cin>>c;
      cout<<"\n\n\n\n\n\n "<<endl;
      
      if(c=='O')
      {
        open_account(i);
      }
      else if(c=='B')
      {
        int acn;
        cout<<"Enter your account number : ";
        cin>>acn;
        bool g=1;
        for(int h=0;h<close&&g!=0;h++)
        {
        g=(acn!=closed_account[h]);	
		}
        if((acn >=1001)&&(acn<=(1000+i))&&g!=0) 
        cout<<"Your account balance is : "<<ACB[(acn-1001)]<<endl;
        else
        cout<<"Invalid account number."<<endl;
        cout<<"\n\n\n\n\n\n\n\n "<<endl;
      }
      else if(c=='D')
      {
        int acn;//account number checker
        cout<<"Enter your bank account number : ";
        cin>>acn;
         bool g=1;
        for(int h=0;h<close&&g!=0;h++)
        {
                g=(acn!=closed_account[h]);	
		}
        if(acn>=1001&&acn<=(1000+i)&&g!=0)
        {
          int d;//deposit amount
          cout<<"Enter the amount you want to deposit : ";
          cin>>d;
          if(d>0)
          {
            ACB[(acn-1001)]=ACB[(acn-1001)]+d;
            cout<<"Your current account balance is : "<<ACB[(acn-1001)]<<endl;
          }

        }
        else 
        cout<<"Invalid account number ."<<endl;

      }
      else if(c=='W')
      {
         int acn;//account number checker
        cout<<"Enter your bank account number : ";
        cin>>acn;
         bool g=1;
        for(int h=0;h<close&&g!=0;h++)
        {
                g=(acn!=closed_account[h]);
		}
        if(acn>=1001&&acn<=(1000+i)&&g!=0)
        {
          int w;// amount
          cout<<"Enter the amount you want to with draw : ";
          cin>>w;
          if(w>0&&w<=ACB[(acn-1001)])
          {
            ACB[(acn-1001)]=ACB[(acn-1001)]-w;
            cout<<"Your current account balance is : "<<ACB[(acn-1001)]<<endl;
          } 
          else 
          cout<<"Invalid amount."<<endl;
          }
        else 
        cout<<"Invalid account number .";
      }
      else if(c=='P')
      {
      	for(int p=1001;p<(i+1001);p++)
      	{
      		 bool g=1;
        for(int h=0;h<close&&g!=0;h++)
        {
                g=(p!=closed_account[h]);
		}
		if(g!=0)
		{
      		cout<<"Account number : "<<ACNO[(p-1001)]<<endl;
			cout<<"Balance : "<<ACB[(p-1001)]<<endl<<endl;
		}
		}
      	
	  }
	  else if(c=='I')
	  {
	  	int acn;//account number checker
        cout<<"Enter your bank account number : ";
        cin>>acn;
         bool g=1;
        for(int h=0;h<close&&g!=0;h++)
        {
                g=(acn!=closed_account[h]);
		}
        if(acn>=1001&&acn<=(1000+i)&&g!=0)
        {
        float rate,time;
        cout<<"Enter the interest rate in terms of percentage : ";
        cin>>rate;
        if(rate>=0)
        {
        cout<<"Enter the duration of time in terms of years :";
        cin>>time;
        if(time>=0)
        {
        	float additional;
        	additional=((rate/100)*ACB[acn-1001])*time;
        	cout<<"Your interest amount for "<<time<<" years at "<<rate<<" % is : "<<additional<<endl;
		}
        else
		{
			cout<<"Invalid time.";
		}	
		}
		else 
		cout<<"Invalid interest rate";
		}
		else
		{
			cout<<"Invalid account number ."<<endl;
		}
	  }
	  else if(c=='C')
	  {
	  	int acn;//account number checker
        cout<<"Enter your bank account number : ";
        cin>>acn;
        if(acn>=1001&&acn<=(1000+i))
        {
        closed_account[close]=acn;
        	close=close+1;
        	cout<<"Your account with account number "<<acn<<" has been closed"<<endl;
        }
	  }
	  else
	  {
	  	cout<<"Invalid input"<<endl;
	  }
        cout<<endl<<"\n \n \n\n"<<endl;
    }
     while (c!='E');
    
   return 0;
}