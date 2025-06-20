#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    vector<pair<ll, ll>> cust(n);
    for(int i = 0; i < n; i++) {
        cin >> cust[i].first >> cust[i].second;
    }

    vector<ll> arr(n), dep(n);
    for(int i = 0; i < n; i++) {
        arr[i] = cust[i].first;
        dep[i] = cust[i].second;
    }

    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());

    ll i = 0, j = 0, curr = 0, mx = 0;
    while(i < n && j < n) {
        if(arr[i] < dep[j]) {
            curr++;
            i++;
            mx = max(curr, mx);
        } else {
            j++;
            curr--;
        }
    }
    cout << mx << endl;
    return 0;
}