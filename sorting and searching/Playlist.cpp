#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n ;
    cin >> n;
    vector<ll>a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    ll cnt = 0, mx = 0;
    unordered_map < ll, ll > mp;
    ll left = 0, right = n-1;
    while(right < n){
       if(mp.find(a[right])!=mp.end()) left = max(left, mp[a[right]+1]);
       mp[a[right]] = right;
        mx = max(mx, right-left+1);
        right++;
    }
    cout << mx << endl;
    return 0;


}