#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<ll>
#define rep(i, a, b) for (int i=a; i<b; i++)

const int N = 1e5+2, MOD = 1e9+7;
vi dp(N, MOD);

bool find(vi arr, ll sum, ll n){
    rep(i, 0, n){
        if(arr[i]==sum){return 1;}
    }
    return 0;
}

ll solve(vi& arr, ll sum, ll n){
    if (find(arr, sum, n)){
        return 1;
    }
    if(dp[sum]!=MOD){
        return dp[sum];
    }
        for(ll j=0; j < n; j++){
            if(sum-arr[j]>0){
                dp[sum] = min(dp[sum], 1 + solve(arr, sum-arr[j], n)); 
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
