#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int min = INT_MAX;
    int second_min = INT_MAX;   
    for(int i=0; i<n; i++){
        if(v[i] < min){
            second_min = min;
            min = v[i];
        }else if(v[i] < second_min){
            second_min = v[i];
        }
    }

    int k = second_min - min;
    int ans = max(k, min);

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