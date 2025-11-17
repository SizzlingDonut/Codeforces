#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    int least = INT_MAX;
    for(int i=0; i<n; i++){
        cin >> v[i];
        least = min(least, abs(v[i]));
    }
    cout << least << endl;

    return 0;
}