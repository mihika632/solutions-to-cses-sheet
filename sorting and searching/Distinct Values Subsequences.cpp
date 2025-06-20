#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
// Fast exponentiation
long long mod_pow(long long base, long long exp, int mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    unordered_set<int> unique;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        unique.insert(x);
    }

    int k = unique.size();
    long long ans = mod_pow(2, k, MOD); // total subsequences
    cout << ans << "\n"; // If non-empty only: use (ans - 1 + MOD) % MOD
    return 0;
}
