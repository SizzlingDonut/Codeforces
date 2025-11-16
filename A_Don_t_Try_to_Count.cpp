#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    cin.ignore();
    string first, second;
    getline(cin, first);
    getline(cin, second);
    if(first.find(second) != string::npos){
        cout << "0" << endl;
        return;
    }
    int count = 0;
    while(true){
        first = first.append(first);
        count++;
        if(count > 10){
            cout << -1 << endl;
            return;
        }
        if(first.find(second) != string::npos){
            cout << count << endl;
            return;
        }
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