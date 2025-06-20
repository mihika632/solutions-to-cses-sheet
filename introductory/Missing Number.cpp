#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<int>a(n-1);
    for(int i = 0; i < n-1; i++) cin >> a[i];
    int sum = 0;
    for(auto it : a) sum += it;
    int reqsum = n*(n+1)/2;
    cout << reqsum - sum;

    return 0;
}