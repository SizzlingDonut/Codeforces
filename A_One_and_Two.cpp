#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    int total2 = 0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(v[i] == 2){
            total2++;
        }
    }

    int cur2 = 0;
    int ans = -1;
    for(int i=0; i<n; i++){
        if(v[i] == 2){
            cur2++;
        }
        if(cur2 == (total2 - cur2)){
            ans = i+1;
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