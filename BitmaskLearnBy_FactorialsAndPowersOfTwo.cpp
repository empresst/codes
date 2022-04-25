#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    #ifndef ONLINE_JUDGE
    #ifndef SYMBOL
    #define SYMBOL value
    #endif
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll i, j, n, t, k, count, ans, total, sum, p_j, rem;
    
    vector<ll> a;
    j=1;
    
    a.push_back(j);
    
    for(i=1; i<=14; i++)
    {
        j=j*i;        //generating factorials of each number cout<<j<<"j ";
        a.push_back(j);
    }

    k=a.size(); //a te ache 14 ta factorial r ekta 1. mot 15 ta nmbr

    
    total=(1<<k); //it means 2 power k here 2 pow 15
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        
        ans=-1;
        
        for(i=0; i<total; i++) //here i will be every number from 0 to 2pow15, bcz there can be 2pow15 subsets of that 15 numbers/tai korte hobe ki j subset gula kivabe toiri hobe setar jonno amra bit use korbo 15 ta sonkhar.jei bit set hobe oto tomo number ta amra nibo ekta subset er moddhe
        {
            //i er value hocche i tomo subset. 0 tomo subset a amra kono element e nibo na. 3 tomo subset a amra 1st 2 ta element nibo(11)
            
            sum=count=0;
            
            p_j=1;

            for(j=0; j<k; j++) //here j will be 0 to 14 orthat 15 ta bit ekta ekta kore check korbe
            {
                if((i&p_j)){     //if i=9 mane 1001 taile p_j =1 r p_j =32 orthat j=4
                    sum=sum+a[j]; //ei sum hobe prottekta subset er jonno jei koyta factorial neya jabe se factorial gular jogfol
                    count++;
                }
                p_j*=2; // cout<<p_j<<"p_j"; eta 2 er power use kora hoy kenona all 2's power have only 1 bit set in binary so by 'anding' with this 2's power we can specifically know if that exact bit is set or not
            }
            
            if(sum>n){
                continue; //sum jodi nmbr er cheye boro hoye jay taile oi subset baad porer ta dekhte jete hobe
            }
            
            rem=n-sum; //jei sum e n er cheye choto sob gulakei n theke baad diye reminder baar kore reminder 2's power diye puron korte koyta nmbr laagbe seta baar korte hobe(koyta set bit ache ta dekhte hobe)
            
            while(rem>0){
                count++;
                rem=(rem&(rem-1)); // this code block count the set bit in set bit of looping
            }
            
            if(ans==-1)
            ans=count;
            else
            ans=min(ans, count); // prottek subset r 2's power er min count baar korbe
        }
        
        cout<<ans<<"\n";
    }
}


// //
// Brian Kernighan’s Algorithm: 
// Subtracting 1 from a decimal number flips all the bits after the rightmost set bit(which is 1) including the rightmost set bit. 
// for example : 
// 10 in binary is 00001010 
// 9 in binary is 00001001 
// 8 in binary is 00001000 
// 7 in binary is 00000111 
// So if we subtract a number by 1 and do it bitwise & with itself (n & (n-1)), we unset the rightmost set bit. If we do n & (n-1) in a loop and count the number of times the loop executes, we get the set bit count. 

