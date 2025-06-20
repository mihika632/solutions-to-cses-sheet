#include <bits/stdc++.h>
using namespace std;
#include<math.h>

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // Your code here
    int mod= 1e9+7;
    long long n ;
    cin >> n;
    long long ans  = 1, base = 2;
    while(n > 0){
        if(n%2 == 1){
            ans = (ans*base)%mod;
        }
        base = (base*base)%mod;
        n/=2;
    }
    cout << ans << endl;

    return 0;
}