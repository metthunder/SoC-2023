#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<ll>
#define rep(i, a, b) for (int i=a; i<b; i++)
const int N = 1e6+2, MOD = 1e9+7;

ll count(ll n, ll* dp){
    if(n==0){
        return 1;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    else{
        for(ll i=1; i<7 && i<=n; i++){
            dp[n] += count(n-i, dp);
            dp[n] = dp[n] % MOD;
        }
        return dp[n];
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ll dp[N] = {0};
    //dp[0]=1;
    cout<<count(n, dp);
    return 0;
}
