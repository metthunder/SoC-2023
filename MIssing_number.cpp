#include<bits/stdc++.h>
using namespace std;
int main(){
    typedef long long int ll;
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ll a, s = 0;
    for(int i=0; i<n-1; i++){
        cin>>a;
        s = s + a;
    }
    cout<<n*(n+1)/2 - s;
    return 0;
}