#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    for(ll i=0; i<n; i++){
        ll a, b;
        cin>>a>>b;
        if (max(a, b)> 2* min(a, b)){cout<<"NO"<<'\n'; continue;}
        if((2*a-b)%3==0 && (2*b-a)%3==0){cout<<"YES"<<'\n'; continue;}
        else{cout<<"NO"<<'\n';}
    }
    return 0;    
}