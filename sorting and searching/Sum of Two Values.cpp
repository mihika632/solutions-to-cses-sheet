#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> twoSum(vector<pair<ll, ll>>& nums, ll target) {
    ll left = 0, right = nums.size() - 1;
    while (left < right) {
        ll sum = nums[left].first + nums[right].first;
        if (sum == target) {
            // Return original indices in increasing order
            return {min(nums[left].second, nums[right].second), 
                    max(nums[left].second, nums[right].second)};
        }
        (sum < target) ? left++ : right--;
    }
    return {-1, -1}; 
}

int main() {
 
    ll n, x;
    cin >> n >> x;
    
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1; // Store original 1-based index
    }

    sort(a.begin(), a.end());

    vector<ll> ans = twoSum(a, x);
    
    if (ans[0] == -1) 
        cout << "IMPOSSIBLE\n";
    else 
        cout << ans[0] << " " << ans[1] << "\n";

    return 0;
}
