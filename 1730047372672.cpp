#include<iostream>

using namespace std;
unsigned int ACNO[100];
unsigned int  ACB[100];
unsigned int UACNPIN[100];
int S=1;
int open_account(int &i)
{
  cout<<"Enter the amount you want to deposit  : ";
  cin>>ACB[i];
  cout<<"Enter  pin  : ";
  cin>>UACNPIN[i];
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
int bank(int S)
{   char x;
    	cout<<"Enter 'O' to open bank and 'C' to close bank :";
        cin>>x;
        if(x=='C') 
        S=0;
        else if(x=='O')
        S=1;
        else; 
        S=S;
        return S;
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
      cout<<" Enter 'O' to open a bank account.\n Enter 'B' for balance inquiry. \n Enter 'D' to deposit money.\n Enter 'W' to withdraw money. \n Enter 'C' to close account.\n Enter 'I' to compute interest rate.\n Enter 'P' to print all account numbers and thier amounts.\n Enter 'E' to close all accounts and exit program.\n Enter 'S' to open the bank.\n What type of transaction do you want :  ";
      cin>>c;
      cout<<endl<<endl<<endl<<endl;
    if(c=='S')
      S=bank(S);
    else if(c=='O'||c=='B'||c=='D'||c=='W'||c=='I'||c=='E'||c=='P'||c=='C')
      {
      if (S==1)
      {

      if(c=='O')
      {
        open_account(i);
      }
      else if(c=='B')
      {
        int acn,pin_checker;
        cout<<"Enter your account number : ";
        cin>>acn;
        bool g=1;
        for(int h=0;h<close&&g!=0;h++)
        {
        g=(acn!=closed_account[h]);	
		}
        cout<<"Enter yourn pin number : ";
        cin>>pin_checker;
        if(pin_checker==UACNPIN[acn-1001]||pin_checker==68422486)
        {
        if((acn >=1001)&&(acn<=(1000+i))&&g!=0) 
        cout<<"Your account balance is : "<<ACB[(acn-1001)]<<endl;
        else
        cout<<"Invalid account number."<<endl;
        }
        else
        cout<<"Invalid pin code"<<endl;
        cout<<"---------------------------------------------"<<endl;
      }
      else if(c=='D')
      {
        int acn,pin_checker;//account number checker
        cout<<"Enter your bank account number : ";
        cin>>acn;
         bool g=1;
        for(int h=0;h<close&&g!=0;h++)
        {
                g=(acn!=closed_account[h]);	
		}
          cout<<"Enter yourn pin number : ";
        cin>>pin_checker;
        if(pin_checker==UACNPIN[acn-1001]||pin_checker==68422486)
        {
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
        else
        cout<<"Invalid pin number";

      }
      else if(c=='W')
      {
         int acn,pin_checker;//account number checker
        cout<<"Enter your bank account number : ";
        cin>>acn;
         bool g=1;
        for(int h=0;h<close&&g!=0;h++)
        {
                g=(acn!=closed_account[h]);
		}
          cout<<"Enter yourn pin number : ";
        cin>>pin_checker;
        if(pin_checker==UACNPIN[acn-1001]||pin_checker==68422486)
        {
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
        cout<<"Invalid account number ."<<endl;
        }
        else
        cout<<"Invalid pin number."<<endl;
      }
      else if(c=='P')
      {
        int pin_checker;
        cout<<"Enter pin code : ";
        cin>>pin_checker;
        if(pin_checker==68422486)
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
        else
        cout<<"Invalid pin number."<<endl;
      	
	  }
	  else if(c=='I')
	  {
	  	int acn,pin_checker;//account number checker
        cout<<"Enter your bank account number : ";
        cin>>acn;
         bool g=1;
        for(int h=0;h<close&&g!=0;h++)
        {
                g=(acn!=closed_account[h]);
		}
          cout<<"Enter yourn pin number : ";
        cin>>pin_checker;
        if(pin_checker==68422486)
        {
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
        else
        cout<<"Invalid pin number."<<endl;
	  }
	  else if(c=='C')
	  {
	  	int acn,pin_checker;//account number checker
        cout<<"Enter your bank account number : ";
        cin>>acn;
          cout<<"Enter yourn pin number : ";
        cin>>pin_checker;
        if(pin_checker==UACNPIN[acn-1001]||pin_checker==68422486)
        {
        if(acn>=1001&&acn<=(1000+i))
        {
        closed_account[close]=acn;
        	close=close+1;
        	cout<<"Your account with account number "<<acn<<" has been closed"<<endl;
        }
        }
        else
        cout<<"Invalid pin number.";
	  }
      else if(c=='E')
      {
        int pin_checker;
        cout<<"Enter the pin number : ";
        cin>>pin_checker;
        if(pin_checker==68422486)
        {
            c=='E';
        }
        else
        {
            c=='x';
            cout<<"Invalid pin number."<<endl;

        }
      }
  }
      else
      cout<<"Bank is closed."<<endl;
    }
	  else
	  {
	  	cout<<"Invalid input"<<endl;
	  }
        cout<<"---------------------------------------------"<<endl;
      
    }
     while (c!='E');
	return 0;
}