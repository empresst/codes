#include <bits/stdc++.h>
using namespace std;

int maxSubarrayXOR(int N, int arr[])
{
    int max_now = 0; // intitialise the 2 values
    int max_e = 1;
    for(int i = 0; i < N; i++){
	max_e = max(arr[i], max_e ^ arr[i]);
	// check whether current element/Xor is bigger than previous Xor value
	max_now = max(max_e, max_now); // update the maximum value
    }

  return max_now; // return the max value when loop is finished
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
	cout << "Maximum subarray xor : " << maxSubarrayXOR(n, a) <<"\n";
    }
}
