#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    vector<int>v_sorted = v;
    sort(v_sorted.begin(), v_sorted.end());
    if(v != v_sorted){
        cout << 0 << endl;
        return;
    }

    int lowest = INT_MAX;
    for(int i=0; i<n-1; i++){
        lowest = min(lowest, v[i+1] - v[i]);
    }

    cout << ((lowest/2) + 1) << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}