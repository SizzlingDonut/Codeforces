#include<bits/stdc++.h>
using namespace std;

void solve(){
    int ans=-1;
    int n, x;
    cin >> n >> x;
    vector<int>gasStations;
    gasStations.push_back(0);
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        gasStations.push_back(a);
    }
    for(int i=0; i<n; i++){
        if((gasStations[i+1] - gasStations[i]) > ans){
            ans = gasStations[i+1] - gasStations[i];
        }
    }
    if((x-gasStations[n])*2 > ans){
        ans = (x - gasStations[n])*2;
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}