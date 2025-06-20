#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n , m;
    cin >> n >> m;
    vector<int> h(n), t(m);
    for(int i = 0; i < n; i++) cin >> h[i];
    for(int i = 0; i < m; i++) cin >> t[i];

    sort(h.begin(), h.end());
    multiset<int> tickets(h.begin(), h.end());

    for(int i = 0; i < m; i++) {
        auto it = tickets.upper_bound(t[i]);
        if (it == tickets.begin()) {
            cout << -1 << "\n";
        } else {
            --it;
            cout << *it << "\n";
            tickets.erase(it);
        }
    }

    

    return 0;
}
