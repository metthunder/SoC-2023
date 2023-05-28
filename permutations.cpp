#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    if(n>3 || n==1){
        if (n%2==0){
            for(ll i=2; i<n+1; i+=2){
                cout<<i<<' ';
            }
            for(ll i=1; i<n; i+=2){
                cout<<i<<' ';
            }
        }
        else{
            for(ll i=2; i<n; i+=2){
                cout<<i<<" ";
            }
            for(ll i=1; i<n+1; i+=2){
                cout<<i<<' ';
            }
        }
    }
    else{
        cout<<"NO SOLUTION";
    }
    return 0; 
}