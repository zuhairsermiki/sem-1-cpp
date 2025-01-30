#include<iostream>
using namespace std;
int main()
{
	int gC[6][6]=
	{
    {3,2,4,4,1,1},{3,5,2,2,5,1},{3,5,4,4,1,1},
    {1,2,5,5,2,1},{2,2,4,4,5,1},{1,1,3,3,5,1},	     	 
    };
    int num1,num2;
    cout<<"Enter two Numbers(1-36):";
    cin>>num1>>num2;
    int r1 = (num1 - 1) / 6;
    int c1 = (num1 - 1) % 6;
    int r2 = (num2 - 1) / 6;
    int c2 = (num2 - 1) % 6;

    if (gC[r1][c1] == gC[r2][c2]) {
        cout << "The two squares have the same color." << endl;
    } else {
        cout << "The two squares have different colors." << endl;
    }

    return 0;

}