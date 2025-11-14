#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string row;
    cin.ignore();
    getline(cin, row);
    int numofdots = 0;
    for(int i=0; i<n; i++){
        if(row[i]=='.'){
            if(row[i-1]=='.' && row[i+1]=='.'){
                cout << 2 << endl;
                return;
            }
            numofdots++;
        }
    }
    cout << numofdots << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}