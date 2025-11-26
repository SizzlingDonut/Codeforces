#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    bool flag = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(__gcd(v[i], v[j]) <= 2){
                flag = 1;
            }
        }
    }

    if(flag==0){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
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