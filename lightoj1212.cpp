#include<bits/stdc++.h>
#include<deque>
#include<cstdlib>
using namespace std;
int main()
{
   // ios_base::sync_with_stdio(false);
    deque<int>dq;
   // deque<int>::iterator it;
    int a,b,c,e;
    string d;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        deque<int>dq;
        cout<<"Case "<<i+1<<":\n";
        cin>>b>>c;
       // dq.assign(b,b);
        for(int i=0;i<c;i++)
        {
            cin>>d;
            if(d=="pushLeft")
            {
                cin>>e;
                if(dq.size()==b){cout<<"The queue is full\n";}
                else {cout<<"Pushed in left: "<<e<<endl;
                dq.push_front(e);}
            }
            else if(d=="pushRight")
            {
                cin>>e;
                if(dq.size()==b){cout<<"The queue is full\n";}
                else{cout<<"Pushed in right: "<<e<<endl;
                dq.push_back(e);}
            }
             else if(d=="popLeft")
            {
                if(dq.size()==0){cout<<"The queue is empty\n";}
                else{cout<<"Popped from left: "<<dq.front()<<endl;
                dq.pop_front();}
            }
             else if(d=="popRight")
            {   if(dq.size()==0){cout<<"The queue is empty\n";}
                else{cout<<"Popped from right: "<<dq.back()<<endl;
                dq.pop_back();}
            }
        }
   /*     if(!dq.empty())
    {
        for(it=dq.begin();it!=dq.end();it++)
        {
            cout<<*it<<"h ";

        }
        dq.clear();
    }
    else if(dq.empty())
    {
        cout<<"The queue is empty"<<endl;
        dq.clear();
    }*/
}


}
