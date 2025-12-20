#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, xk, yk, xq, yq;
    cin >> a >> b;
    cin >> xk >> yk;
    cin >> xq >> yq;

    vector<pair<int, int>>k = {{xk+a, yk+b}, {xk+a, yk-b}, {xk-a, yk+b}, {xk-a, yk-b},
                               {xk+b, yk+a}, {xk+b, yk-a}, {xk-b, yk+a}, {xk-b, yk-a}};

    vector<pair<int, int>>q = {{xq+a, yq+b}, {xq+a, yq-b}, {xq-a, yq+b}, {xq-a, yq-b},
                               {xq+b, yq+a}, {xq+b, yq-a}, {xq-b, yq+a}, {xq-b, yq-a},};

    int mx = (xk + xq)/2;
    int my = (yk + yq)/2;

    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(k[i] == q[j]){
                if((k[i].first==mx) && (k[i].second==my)){
                    cout << "1" << endl;
                    return;
                }else{
                    cout << "2" << endl;
                    return;
                }
            }
        }
    }

    cout << "0" << endl;
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