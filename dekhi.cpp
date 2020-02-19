#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d=0,e,f,k;
    cin>>k;
    for(int i=0;i<k;i++){
            d=0;
    cin>>a>>b>>c;
    if(b>=c)
    {
        e=b;
        while(e>=2&&a>=1)
        {
            e=e-2;
            a=a-1;
            d=d+3;
        }
      while(e>=1&&c>=2) {d=d+3;e=e-1;c=c-2;return;}

    }
    if(c>b){
            f=f-2;
            b=b-1;
            d=d+3;
        }
         while(f>=1&&b>=2) {d=d+3;f=f-1;b=b-2;}
    }
    cout<<d<<endl;

return 0;
    }

