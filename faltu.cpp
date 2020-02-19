#include<bits/stdc++.h>
using namespace std;
int main ()
{long long int a,b,k,c=0;
cin>>a;
for(int i=0;i<a;i++)
{cin>>b;
c=0;
for(int i=0;i<b;i++)
{ cin>>k;
c+=k; }
printf("%0.lf\n",ceil(double(c)/double(b)));
}}
