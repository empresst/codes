#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        cin>>b>>c>>d;

        int mini=min ((min(b,c)),d);
        int maxi=max((max(b,c)),d);
        if(b!=maxi && b!=mini)
            cout<<"Case "<<i<<": "<<b<<endl;
        if(c!=maxi && c!=mini)
            cout<<"Case "<<i<<": "<<c<<endl;
        if(d!=maxi && d!=mini)
            cout<<"Case "<<i<<": "<<d<<endl;
      /*  c=((((b*567)/9)+7492)*235)/47-498;
        if(c<0)
            c*=-1;

        cout<<c/10%10<<endl;*/
    }
}
