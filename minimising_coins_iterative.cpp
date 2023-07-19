#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<ll>
#define rep(i, a, b) for (int i=a; i<b; i++)

const int N = 1e6+2, MOD = 1e9+7;
vi dp(N, MOD);

ll solve(vi& arr, ll sum, ll n){
    for(int i=1; i<=sum; i++){
        for(int j=0; j<n; j++){
            if(i >= arr[j]){
                dp[i] = min(dp[i], 1 + dp[i - arr[j]]);
            }
        }
    }
    return dp[sum];
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    dp[0]=0;
    ll n, sum;
    cin>>n>>sum;
    vi arr(n, 0);
    rep(i, 0, n){
        cin>>arr[i];
    }
    cout<<(solve(arr, sum, n)==MOD? -1: solve(arr, sum, n));
    return 0;
}
