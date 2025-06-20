#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n, x;
    cin >> n >> x;
    vector<ll>positions(x);
    for(ll i = 0; i < x; i++) cin >> positions[i];

    set < ll > lights = {0,x};
    multiset < ll > segments = {x};
    for(auto p : positions){
        auto upper = lights.upper_bound(p);
        auto lower = prev(upper);

        segments.erase(*upper - *lower);
        segments.insert(*upper - p);
        segments.insert(p - *lower);
        lights.insert(p);
        cout << *segments.rbegin() << " " << endl;
    }

}