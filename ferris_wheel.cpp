#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, x, a;
    cin>>n>>x;
    vector<ll> v;
    for(ll i=0; i<n; i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    ll answer=0, i=0, j=n-1;
    while(i<=j){
        if(v[i]+v[j]>x){
            j--; answer++;
        }
        else if (v[i]+v[j]<=x){
            i++; j--; answer++;
        }
    }
    cout<<answer;

    return 0;
}