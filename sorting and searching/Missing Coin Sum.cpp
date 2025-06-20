#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin >> n;
    vector<ll>a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll ans = 1;
    sort(a.begin(), a.end());
    for(ll i = 0; i < n; i++){
        if(a[i] > ans) {
            // cout << ans << endl;
            break;
        }
        ans += a[i];
    }
    cout << ans <<  endl;
    return 0;

}