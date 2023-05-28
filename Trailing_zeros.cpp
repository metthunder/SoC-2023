#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll power(ll n, ll x){
    ll ans=0, p_ans=-1, i=1;
    while(ans!=p_ans){
        p_ans = ans;
        ans+=floor(n/pow(x, i++));
        //cout<<ans;
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ll p2, p5;
    p2 = power(n, 2);
    p5 = power(n, 5);
    cout<<min(p2, p5);

    return 0;
}