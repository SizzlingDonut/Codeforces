#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    map<int, int>mp;
    for(int i=0; i<n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    if(mp.size() > 2){
        cout << "No" << endl;
        return;
    }
    if(mp.size()==2){
        auto it = mp.begin();
        int f1 = it->second;
        it++;
        int f2 = it->second;
        if(n%2==0){
            if(f1!=f2){
                cout << "No" << endl;
                return;
            }
        }else{
            if(abs(f1-f2) != 1){
                cout << "No" << endl;
                return;
            }
        }
    }
    cout << "Yes" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}