#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
      scanf("%d %d",&n,&k);
      int a=n/k;
      int c=a*k;
      int b=min((n%k),k/2);

      cout<<c+b<<endl;}
    }

