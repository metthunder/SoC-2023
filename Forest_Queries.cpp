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
    cin >> n >> q;
    vector<vector<char>> v(n, vector<char>(n, 0));
    rep(i, 0, n){
        rep(j, 0, n){
            cin >> v[i][j];
        }
    }
    vector<vector<int>> tree(n, vector<int>(n,0));
    tree[0][0] = (v[0][0] == '*')? 1:0;
    rep(i, 0, n){
        rep(j, 0, n){
            if(!(i>0) && j>0){
                tree[i][j] = (v[i][j] == '*' ? (tree[i][j-1] + 1):(tree[i][j-1]));
            }     
            if(i>0 && !(j>0)){
                tree[i][j] = (v[i][j] == '*' ? (tree[i-1][j] + 1):(tree[i-1][j]));
            }            
            if(v[i][j]=='*' && i>0 && j>0){
                tree[i][j] = tree[i-1][j] + tree[i][j-1] - tree[i-1][j-1] + 1;
            }
            if(v[i][j] == '.' && i>0 && j>0){
                tree[i][j] = tree[i-1][j] + tree[i][j-1] - tree[i-1][j-1];
            }
        }
    }
    // rep(i, 0, n){
    //     rep(j, 0, n){
    //         cout << tree[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int x1, y1, x2, y2;
    rep(i, 0, q){
        cin >> x1 >> y1 >> x2 >> y2;
        int numberOfTrees = 0;
            if(min(y1, y2) >= 2 && min(x1, x2) >= 2){
                numberOfTrees = tree[max(x1, x2) - 1][max(y1, y2) - 1] - tree[max(x1, x2) - 1][min(y1, y2) - 2] - tree[min(x1, x2) - 2][max(y1, y2) - 1] + tree[min(x1, x2) - 2][min(y1, y2) - 2];
            }
            else if(!(min(y1, y2) >= 2) && min(x1, x2) >= 2){
                numberOfTrees = tree[max(x1, x2) - 1][max(y1, y2) - 1] - tree[min(x1, x2) - 2][max(y1, y2) - 1];
            }
            else if((min(y1, y2) >= 2) && !(min(x1, x2) >= 2)){
                numberOfTrees = tree[max(x1, x2) - 1][max(y1, y2) - 1] - tree[max(x1, x2) - 1][min(y1, y2) - 2];
            }
            else{
                numberOfTrees = tree[max(x1, x2) - 1][max(y1, y2) - 1];
            }
        cout << numberOfTrees << '\n';
    }

    return 0;
}
