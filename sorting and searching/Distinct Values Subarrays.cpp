#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n   ;
    cin >> n;
    vector<ll>a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    unordered_set<ll>seen;;
    ll i = 0, j = 0;
    ll cnt = 0;
    while (i < n){
        while(j < n && seen.find(a[j])==seen.end()){
            seen.insert(a[j]);
            j++;
            
        }
        cnt += j-i;
         seen.erase(a[i]);
         i++;
    }
    cout << cnt << endl;
}
// Share code to others