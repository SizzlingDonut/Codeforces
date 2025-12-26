#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, n;
    cin >> a >> b >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    long long total = b;
    for(int i=0; i<n; i++){
        total += min(v[i], a-1);
    }

    cout << total << endl;
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