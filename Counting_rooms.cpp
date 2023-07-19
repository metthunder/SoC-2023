#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<ll>
#define vvi vector<vector<ll>>

const int N = 1e3+2, MOD = 1e9+7;
ll rooms = 0;

void traverse(vector<vector<char>>& adj, ll i, ll j, vvi& visited, ll n, ll m){
    visited[i][j] = 1;
    if(i+1 < n){
        if(!visited[i+1][j] && adj[i+1][j]=='.'){
            traverse(adj, i+1, j, visited, n, m);
        }
    }
    if(j+1 < m){
        if(!visited[i][j+1] && adj[i][j+1]=='.'){
            traverse(adj, i, j+1, visited, n, m);
        }
    }
    if(i-1 >= 0){
        if(!visited[i-1][j] && adj[i-1][j]=='.'){
            traverse(adj, i-1, j, visited, n, m);
        }
    }
    if(j-1>=0){
        if(!visited[i][j-1] && adj[i][j-1]=='.'){
            traverse(adj, i, j-1, visited, n, m);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, m;
    cin>>n>>m;
    vector<vector<char>> adj(n, vector<char>(m));
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin>>adj[i][j];
        }
    }
    vvi visited(n, vector<ll>(m, 0));
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            if(!visited[i][j] && adj[i][j]=='.'){
                traverse(adj, i, j, visited, n, m);
                rooms++;
            }
            else{
                continue;
            }
        }
    }
    cout<<rooms;
    return 0;
}
