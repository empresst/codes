#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    scanf("%d",&t);
    while(t--)
    {
      scanf("%d %d",&n,&k);
      int a=(24*60)-((n*60)+k);

      cout<<a<<endl;
    }
}


