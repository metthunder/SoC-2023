#include<iostream>
#include <vector>
using namespace std;
typedef long long int ll;

ll emotes(ll k, ll x){
    ll count_e=0, count=0;
    for(ll i=1; i!=k+1; i++){
        if(count_e >= x){
            return count;
        }
        else{
            count_e += i;
            count++;
        }
    }
    for(ll i=k-1; i!=0; i--){
        if(count_e >= x){
            return count;
        }
        else{
            count_e += i;
            count++;
        }
    }
    if (x>k*k){
        return 2*k-1;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll t, k, x;
    cin>>t;
    vector<pair<ll, ll>> v;
    for(ll j=0; j<t; j++){
        cin>>k>>x;
        v.push_back(make_pair(k, x));
    }
    for(ll i=0; i<t; i++){
        cout<<emotes(v[i].first, v[i].second)<<'\n';
    }
    return 0;
}