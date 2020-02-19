#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t, n, i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==1){
            cout<<"7";
            n=n-3;
            for(i=1; i<=n; i=i+2){
                cout<<"1";
            }
            cout<<endl;
        }
        else{
              for(i=1; i<=n; i=i+2){
                cout<<"1";
            }
            cout<<endl;
        }
    }
    return 0;
}
