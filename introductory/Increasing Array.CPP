#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long>a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    long long cnt = 0;
    for(int i = 0; i < n-1; i++){
        if(a[i] > a[i+1]) {
            cnt+=(a[i]-a[i+1]);
            a[i+1] = a[i];
        }

    }
    cout << cnt << endl;
    return 0;
}