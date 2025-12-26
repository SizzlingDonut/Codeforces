#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k, x;
    cin >> n >> k >> x;

    int max_possible = (n*(n+1))/2;
    if(x > max_possible){
        cout << "NO" << endl;
        return;
    }

    int sum_top_k = max_possible - (((n-k) * (n-k+1))/2);
    int sum_least_k = (k*(k+1))/2;
    if(sum_top_k >= x && x >= sum_least_k){
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}