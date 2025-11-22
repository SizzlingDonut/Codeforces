#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    int x = 0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        x = x ^ v[i];
    }

    if(n%2==0){
        if(x==0){
            cout << 0 << endl;
        }else{
            cout << -1 << endl;
        }
    }else{
        cout << x << endl;
    }
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