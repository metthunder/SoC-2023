#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, a, count = 0;
    cin>>n;
    vector<int> v;
    for(ll i=0; i<n; i++){
        cin>>a;
        v.push_back(a);
    }
    vector<bool> vb(INT_MAX, false);
    for(auto i : v){
        if(!vb[i-1]){
            count++;
            vb[i-1]=1;
        }
    }
    cout<<count;
    return 0;
}