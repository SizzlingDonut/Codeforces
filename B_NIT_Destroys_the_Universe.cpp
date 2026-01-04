#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    int numOfZeros = 0;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(v[i]==0)numOfZeros++;
    }

    if(numOfZeros==0){
        cout << 1 << "\n";
        return;
    }

    int i=0;
    int ans = 0;
    while(i<n){
        while(i<n && v[i]==0){
            i++;
        }

        if(i!=n){
            while(i<n && v[i]!=0){
                i++;
            }
            ans++;
        }
    }

    if(ans>2){
        cout << 2 << "\n";
    }else{
        cout << ans << "\n";
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