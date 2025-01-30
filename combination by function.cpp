#include<iostream>
using namespace std;
int factorial(int n){
int fact=1;
for(int j=1;j<=n;j++){
fact*=j;


}

return fact;
}
int nCr(int n, int r)
{
int fact_n=factorial(n);
int fact_r=factorial(r);
int fact_nmr=factorial(n-r);
return fact_n/(fact_r*fact_nmr) ;
}


int main()
{cout<<nCr(5,3);
    return 0;
}