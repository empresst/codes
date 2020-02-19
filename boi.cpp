#include<bits/stdc++.h>

using namespace std;
int main()
{
int a,c=0;
int b[255];
cin>>a;
{
for(int i=0;i<(2*a);i++)
{
    while((2*a)--)
    cin>>b[i]>>b[i+1];
    while(b[i]<b[i+2]||b[i]<b[i+3]&&b[i+1]<b[i+2]||b[i+1]<b[i+3])
    {
        ++c;
    }
}}
cout<<c<<endl;
}
