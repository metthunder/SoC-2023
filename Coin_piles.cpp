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
        while (a>0 && b>0){
            if(a>=b){
                a-=2;
                b-=1;
            }
            else{
                a-=1;
                b-=2;
            }
        }
        if (a==0 && b==0){cout<<"YES"<<'\n';}
        else{cout<<"NO"<<'\n';}
    }
    return 0;    
}