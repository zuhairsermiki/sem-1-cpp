#include<iostream>

using namespace std;
void grade(int g){

if(g>=90){
    cout<<" grade is A";

}   else if(g>=80){
    cout<<"grade is B";
} else if(g>=70){
    cout<<"grade is C";
} else if(g>=60){
    cout<<"grade is D";
} else {
    cout<<"grade is F";
}
}
void number(int arr[][3],int s){


   float average;
   float sum;
for(int i=0;i<s;i++){
    sum=0;
    for(int j=0;j<3;j++){
        sum=sum+arr[i][j];


        }
        float avg=sum/3;
    cout<<"average of student "<<i+1<<" :"<< avg;
   cout<<"( " ;

   grade(avg);
   cout<<" )"<<endl;
}


}
int main(){

int s;

cout<<"enter number of students :";
cin>>s;
int arr[s][3];

for(int i=0;i<s;i++){

    for(int j=0;j<3;j++){
        cout<<"enter marks of student "<<i+1<<" in subject "<<j+1<<" : ";

    cin>>arr[i][j];
        }
}
    number(arr,s);

    return 0;
}