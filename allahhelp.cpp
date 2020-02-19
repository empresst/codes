#include<bits/stdc++.h>
using namespace std;
int main()
{
    char b[200];
    char c[200];
    cin>>b>>c;
    gets(b);
    int k=(unsigned)strlen(b);
for(int i=0;i<=k;i++)
{
    if(b[i]==b[i+1] && c[i]==c[i+1])

    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}
