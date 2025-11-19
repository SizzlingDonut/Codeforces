#include<bits/stdc++.h>
using namespace std;
/*
    1) sum<0 && product>0   =>  sum+=2 until sum>0
    2) sum<0 && product<0   =>  
    3) sum>0 && product>0   =>  0
    4) sum>0 && product<0   =>  1
    5)sum==0 && product>0   =>  0
    6)sum==0 && product<0   =>  1

    1 1 1 1 1 1 1 1 -1        n=9, sum=7, prod=-1
*/
void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    int sum = 0, product = 1;
    int numPos = 0, numNeg = 0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        sum += v[i];
        product *= v[i];
        if(v[i]==1){
            numPos++;
        }else{
            numNeg++;
        }
    }

    int operations = 0;
    while(numPos<numNeg || numNeg%2==1){
        operations++;
        numPos++;
        numNeg--;
    }
    cout << operations << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}