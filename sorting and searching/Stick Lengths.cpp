#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll n;
    cin >> n;
    vector<ll>a(n);
    for(ll i = 0; i < n; i++)cin >> a[i];
    sort(a.begin(), a.end());
    ll median = a[n/2];
    ll cost = 0;
    for(auto i : a) cost += abs(i-median);
    cout << cost << endl;

}