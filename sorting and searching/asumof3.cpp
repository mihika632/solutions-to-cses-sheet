#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    ll x;
    cin >> n >> x;

    vector<pair<ll, int>> a(n); // pair of (value, original index)

    for (int i = 0; i < n; ++i) {
        cin >> a[i].first;
        a[i].second = i + 1; // Store original 1-based index
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; ++i) {
        ll target = x - a[i].first;
        int left = 0, right = n - 1;

        while (left < right) {
            if (left == i) { left++; continue; }
            if (right == i) { right--; continue; }

            ll sum = a[left].first + a[right].first;

            if (sum == target) {
                cout << a[i].second << " " << a[left].second << " " << a[right].second << "\n";
                return 0;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}