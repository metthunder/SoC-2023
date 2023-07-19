#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define pii pair<ll, ll>
#define rep(i, a, b) for (int i=a; i<b; i++)
#define ff first
#define ss second

const int N = 1e3+2, MOD = 1e9+7;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin>>n>>q;
    vector<int> v(n,0);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int p[n] = {0};
    p[0] = v[0];
    for(int i = 1; i<n; i++){
        p[i] = p[i-1] ^ v[i];
    }

    int a, b, ans;
    for(int i=0; i<q; i++){
        cin >> a >> b;
        if (a != 1){
            ans = p[a-2] ^ p[b-1];
        }
        else{
            ans = p[b-1];
        }
        cout<<ans<<'\n';
        
    }

    return 0;
}
