#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    ll n;
    cin >> n;
    vector<ll>a(n);
    for(ll i = 0; i< n; i++) cin >> a[i];
    ll mxsum = a[0],sum = a[0];
    for(int i = 1; i < n; i++){
        sum = max(a[i], sum+a[i]);
        // if(sum < 0) sum = 0;
        mxsum = max(mxsum,sum);
    }
    cout << mxsum << endl;

    return 0;

}