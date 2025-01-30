#include<iostream>
using namespace std;
main()
{
	
	int arr1[2][2]={{5,3},{2,6}};
	int arr2[2][2];
	int m,n;
	for (int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			if(i==j)
		{
				
			if(i==0)
			{
				m=arr1[i][j];
				arr2[1][1]=m;
			}
		
			else if(i!=0)
			{
				m=arr1[1][1];
				arr2[0][0]=m;
			}
		
		
			}
			else if(i!=j)
			{
				arr1[i][j]=-arr1[i][j];
			}
		
		}
		}
	}
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<arr2[i][j]<<"   ";
		}
		cout<<endl;
	}
	
}

