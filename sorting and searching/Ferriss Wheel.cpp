#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n, x;
    cin >> n >> x;
    vector<ll>p(n);
    for(int i = 0; i < n; i++) cin >> p[i];
sort(p.begin(), p.end());
    ll i = 0, j = n - 1;
    ll ans = 0;
    while(j >= i){
        if(p[i]+p[j] <= x){
            ans++;
            i++;
            j--;
        }
        else{
            ans++;
            j--;
        }
    }
    cout << ans << endl;

}