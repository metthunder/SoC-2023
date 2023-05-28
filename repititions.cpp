#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    long long int pc=0, cc=0;
    for (int i = 1; i < str.length(); i++){
        if (str[i-1]==str[i]){
            cc++;
        }
        else{
            if (cc>pc){
                pc=cc;
            }
        }
    }
    cout<<pc;
    return 0;
}