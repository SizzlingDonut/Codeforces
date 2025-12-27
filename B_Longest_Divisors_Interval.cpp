#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin >> n;

    ll cnt = 0;
    ll ans = 0;

    for(ll i=1; ; i++){
        if(n%i==0){
            cnt++;
        }else{
            ans = cnt;
            break;
        }
    }

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