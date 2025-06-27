//
// Created by ANIL on 22-06-2025.
//
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll>arr(n+1 , 0);
    for(ll i=0;i<n;i++){
        ll sample;
        cin >> sample;
        arr[sample]++;
    }
    for(ll i=1;i<n;i++){
        if(arr[i] == 0)
            continue;
        if(arr[i] == 1) {
            cout << "No\n" ;
            return;
        }
        if(arr[i] >= 2){
            int left = arr[i] - 2;
            arr[i+1] = arr[i+1] + left;

        }
    }
    cout << "Yes\n" ;


}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}