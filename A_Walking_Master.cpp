#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if(d<b){
        cout << -1 << endl;
        return;
    }

    if((c-a)>(d-b)){
        cout << -1 << endl;
        return;
    }

    int ans = d-b;
    a += d-b;
    if(a>c) ans+=(a-c);

    cout << ans << endl;
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