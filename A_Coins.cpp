#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    ll n, k;
    cin >> n >> k;

    if(n%2!=0 && k%2==0){
        cout << "NO" << endl;
        return;
    }

    while(n%2!=0){
        n -= k;
        if(n<0){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}