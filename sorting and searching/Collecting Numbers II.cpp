#include<bits/stdc++.h>
#define ll long long
using namespace std;
int count(vector<int>&a, int n){
    int cnt = 1;

    vector<int>pos(n+1);
    for(int i = 0; i < n; i++) pos[a[i]] = i;

    for(int i = 2; i <= n; i++){
        if(pos[i]<pos[i-1]) cnt++;
    }
    return cnt;
}
int main(){
    int n, m;
     cin >> n >> m;
     vector<int>a(n);
     for(int i = 0; i < n; i++) cin >> a[i];
    vector<pair<int, int >> v(m);
    for(int i = 0;i < m; i++) cin >> v[i].first >> v[i].second;
    
    for(auto it : v){
        it.first--;
        it.second--;        
    }

    int cnt = count(a,n);
    vector<int>pos(n+1);
    for(int i = 0;i < n; i++) pos[a[i]] = i;

    for(auto it : v){
        int x = it.first, y = it.second;

        swap(a[x], a[y]);

        pos[a[x]] = x, pos[a[y]] = y;

        set<int> indices = {a[x], a[y]};
        for(int i : indices) {
            if(i > 1) {
                if(pos[i] < pos[i - 1]) cnt++;
                else cnt--;
            }
            if(i < n) {
                if(pos[i + 1] < pos[i]) cnt++;
                else cnt--;
            }
        }

        cout << cnt << endl;
    }
    return 0;


}