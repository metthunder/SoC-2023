#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, count = 1;
    cin>>n;
    int arr[n];
    for(ll i=0; i<n; i++){
        cin>>arr[i];
    }
    for(ll i = 1; i<n; i++){
        ll j=0;
        for(j=0; j < i; j++){
            if(arr[i]==arr[j]){
                break;
            }
        }
        if(i==j){
            count++;
        }
    }
    cout<<count;
    return 0;
}