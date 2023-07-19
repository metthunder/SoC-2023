#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define pii pair<ll, ll>
#define rep(i, a, b) for (int i=a; i<b; i++)
#define ff first
#define ss second

const int N = 1e3+2, MOD = 1e9+7;

ll ans = 0;

ll count(ll n){
    if(n == 0){
        return ans;
    }
    else{
        ans++;
        int org_n = n;
        int max_digit = 0, digit = 0;
        while(n!=0){
            digit = n % 10;
            n = n/10;
            max_digit = max(max_digit, digit);
        }
        return count(org_n - max_digit);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    cout<<count(n);
    return 0;
}
