#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll f(int i, vector<ll>&arr, int sum1, int sum2, ll n){
    if(i == n) return abs(sum1-sum2);
    ll pick = f(i+1, arr, sum1+arr[i], sum2, n);
    ll notpick = f(i+1, arr, sum1, sum2+arr[i], n);
    return min(pick, notpick);
}
int main(){
    ll n;
    cin >> n;
    vector<ll>arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    ll ans = f(0,arr,0,0,n);
     cout << ans << " " << endl;
    
}