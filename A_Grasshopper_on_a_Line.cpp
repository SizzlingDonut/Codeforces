#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x, k;
    cin >> x >> k;
    if(x%k!=0 || x<k){
        cout << 1 << endl << x << endl;
        return;
    }else{
        cout << 2 << endl <<(x-k-1)<< " " <<(k+1)<< endl;
        return;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}