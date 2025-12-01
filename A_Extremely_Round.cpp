#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    int ans = 0;
    vector<int>v = {1,2,3,4,5,6,7,8,9};
    for(int i=0; i<6; i++){
        for(int j=0; j<9; j++){
            if(v[j] <= n){
                ans += 1;
            }else{
                break;
            }
        }
        for(int k=0; k<9; k++){
            v[k] *= 10;
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