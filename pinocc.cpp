#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n;
double d;

int t;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>n;
    int e=0;
    int ar[n];
    for(int j=0;j<n;j++)
cin>>ar[j];
    d=ar[0]-2;
    e=ceil(d/5.0);
for(int j=1;j<n;j++)
{
    d=ar[j]-ar[j-1];
    e+=ceil(d/5.0);
}
cout<<"Case "<<i+1<<": "<<e<<endl;}}
