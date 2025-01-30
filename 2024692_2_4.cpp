#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number  from 0 to 65535 : ";
    cin>>a;
    if(a>=0&&a<65536)
    {
        int k=a;
        int l=0;
        int arr[16];
        arr[0]=0;
        arr[15]=0;
        for(int s=0;k>0;s++)
        {
            arr[s]=(k%2);
          if(k%2==0)
          k=(k/2);
          else
          k=((k-1)/2);
          l=s;
        } 
        if(l<15)
        { 
          for(int b = l+1;b<16;b++)
          {
          arr[b]=0;
          }
        }
        cout<<"Binary number is : ";
        for(int x=15;x>=0;x--)
        {
          cout<<arr[x];
        }
        cout<<endl<<endl<<endl;
        for(int c=0;c<15;c++)
        {
        	if(arr[c+1]==1)
        	{
        		if(arr[c]==0)
        		arr[c]=1;
        		else
        		arr[c]=0;
			}
		}
		cout<<"Gray code is : ";
		      for(int x=15;x>=0;x--)
        {
          cout<<arr[x];
        }

    }
    else 
    cout<<"Invalid Input, dubara dial karay.";
    return 0;
}