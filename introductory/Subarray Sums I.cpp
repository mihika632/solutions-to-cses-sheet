#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
    int n, sum;
    cin >> n >> sum;
    vector<int>v(n);
    for(int i = 0;i < n; i++) cin >> v[i];
    int cnt = 0;
    int i = 0, j = 1;
    while(i < j){
        if(v[i]+v[j]==sum) cnt++;
        i++;
        j++;
        
    }
    cout << cnt << endl;
}