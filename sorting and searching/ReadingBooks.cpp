#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n ; 
    cin >> n;
    vector<ll>a(n);
    for(int i = 0;i < n; i++)cin >> a[i];
    sort(a.begin(), a.end());
    ll sum = 0, largest = a[n-1];
    for(auto i : a) sum += i;
    cout << max(2*largest, sum);
    cout  << endl;
}