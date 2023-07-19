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
    int n;
    cin>>n;
    vector<pair<int, int>> v;
    int start, end;
    for(int i=0; i<n; i++){
        cin>>start>>end;
        v.push_back(make_pair(start, 1));
        v.push_back(make_pair(end, -1));
    }
    sort(v.begin(), v.end());
    int ans = 0, max_ans = 0;
    rep(i, 0, 2*n){
        max_ans = max(max_ans, ans);
        if(v[i].ss == 1){
            ans++;
        }
        else{
            ans--;
        }
    }
    cout<<max_ans;
    return 0;
}
