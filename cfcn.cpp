#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,a,b) for(int i=a;i<=b;i++)
int main()
{
    ll a,b,c=0;
    ll ar[1000];
    cin>>a>>b;
       REP(i,1,b)
        {
        cin>>ar[i];
        c=c+ar[i];
        }
                if(c>=a)
                    {
                        cout<<"Yes\n";

                    }


        else if(c<a) cout<<"No\n";
    //cout<<ceil(A/H);
}
