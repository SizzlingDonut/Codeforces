#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int sum = 0;
    for(int i=0; i<n-1; i++){
        sum += abs(v[i] - v[i+1]);
    }

    int maxElement = INT_MIN;
    for(int i=0; i<n; i++){
        int k;
        if(i==0){
            k = abs(v[0] - v[1]);
        }else if(i==n-1){
            k = abs(v[n-2] - v[n-1]);
        }else{
            k = abs(v[i-1] - v[i]) + abs(v[i] - v[i+1]) - abs(v[i-1] - v[i+1]);
        }
        
        maxElement = max(maxElement, k);
    }

    cout << (sum - maxElement) << endl;
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