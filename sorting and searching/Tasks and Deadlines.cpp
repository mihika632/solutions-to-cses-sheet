#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; 
    cin >> n;
    vector<pair<int, int >> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }
    ll ans = v[0].second;
    int f=0;
    for(int i = 1; i < n; i++){
        f += v[i].first;
        ans = v[i].second;
        ans -= f;
    }
    cout << abs(ans) << endl;


}