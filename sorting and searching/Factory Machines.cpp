#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isEnough(ll time, const vector<ll>& machines, ll t) {
    ll total = 0;
    for (ll k : machines) {
        total += time / k;
        if (total >= t) return true; // early stop
    }
    return false;
}

int main() {
    ll n, t;
    cin >> n >> t;
    vector<ll> machines(n);
    for (ll& k : machines) cin >> k;

    ll left = 1, right = 1e18, ans = right;
    while (left <= right) {
        ll mid = left + (right - left) / 2;
        if (isEnough(mid, machines, t)) {
            ans = mid;
            right = mid - 1; // try to find smaller time
        } else {
            left = mid + 1;  // need more time
        }
    }
    cout << ans << endl;
    return 0;
}
