#include<iostream>
#include<math.h>
using namespace std;
int main (){   
     double ha , ma;
     double ta, bs;
     double grs;
     
     cout << "Dream tech employees allowance "<< endl;
     cout << "enter basic salary" << endl;
     cin >> bs;
     ha = bs*0.30;
     cout << "house allowance:" <<ha<< endl;
     ta=bs*0.10;
     cout << "transport allowance :" <<ta<< endl;
     ma=bs*0.25;
     cout << "medical allowance :" <<ma<< endl;
     grs = bs+ ha+ ta+ma;
     cout << "gross salary : " <<grs<< endl;
     double nha , nma;
     double nta ;
     double ngrs;
     
     cout << "Dream tech employees new allowance "<< endl;
     nha = bs*0.40;
     cout << "new house allowance:" <<nha<< endl;
     nta=bs*0.15;
     cout << "new transport allowance :" <<nta<< endl;
     nma=bs*0.25;
     cout << "new medical allowance :" <<nma<< endl;
     ngrs = bs+ nha+ nta+nma;
     cout << "new gross salary : " <<ngrs<< endl;
return 0;
  }
  