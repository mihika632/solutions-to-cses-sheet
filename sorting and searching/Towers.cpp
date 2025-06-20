#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];
    
    ll ans = 0;
    multiset < ll >topele;
    for(ll i = 0; i < n; i++){
        auto it = topele.upper_bound(v[i]);
        if(it == topele.end()){
            ans ++ ;
            topele.insert(v[i]);
        }
        else{
            topele.erase(it);
            topele.insert(v[i]);
        }
    }
    cout << ans << endl;
}