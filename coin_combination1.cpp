#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define pii pair<ll, ll>
#define rep(i, a, b) for (int i=a; i<b; i++)
#define ff first
#define ss second

const int N = 1e6+2, MOD = 1e9+7;

int dp[N] = {0};
vi v(N, 0);

int count(ll n, ll sum){
    if(dp[sum]!=0){
        return dp[sum];
    }
    for(ll i=0; i<n; i++){
        if(sum >= v[i]){
            dp[sum] += count(n, sum-v[i]);
            dp[sum] %= MOD;
        }
    }
    return dp[sum];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    dp[0] = 1;
    ll n, sum;
    cin>>n>>sum;
    //vi v(n, 0);
    rep(i, 0, n){
        cin>>v[i];
    }
    cout<<count(n, sum);
    return 0;
}
