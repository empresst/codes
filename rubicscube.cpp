#include<bits/stdc++.h>
using namespace std;
void farnht();
void celss();
int main()
{
    int x;
    cout<<"If you want to enter celsius value then press 1 otherwise press 2"<<endl;
    cin>>x;
     if(x==1){farnht();} else if(x==2){celss();}
}
void farnht()
{
    cout<<"enter the celsius value"<<endl;
    double y,z;
    cin>>y;
    z=(y*(9.0)/(5.0))+32;
    cout<<"farenht value is : "<<z<<"F"<<endl;
}
void celss()
{
        cout<<"enter the farnht value"<<endl;
    double y,z;
    cin>>y;
    z=(y-32)*(5.0/9.0);
    cout<<"celss value is : "<<z<<"C"<<endl;
}


