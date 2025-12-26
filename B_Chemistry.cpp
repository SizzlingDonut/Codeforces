#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;

    map<char, int>mp;
    for(auto ch : s){
        mp[ch]++;
    }

    int oddCount = 0;
    for(auto [key, val] : mp){
        if(val%2!=0){
            oddCount++;
        }
    }

    if(k >= oddCount-1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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