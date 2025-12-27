#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    if(n==1){
        cout << 0 << endl;
        return;
    }

    sort(v.begin(), v.end());

    int num = 0;
    int cnt = 1;
    for(int i=0; i<n-1; i++){
        int j = abs(v[i+1] - v[i]);
        if(j <= k){
            cnt++;
        }else{
            num = max(num, cnt);
            cnt=1;
        }
    }
    num = max(num, cnt);

    cout << (n-num) << endl;
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