#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
    int n ;
    cin >> n;
    vector<pair<int, int>>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first ;
        cin >> v[i].second;
    }
    sort(v.begin(),  v.end(), [](const pair <int, int >&p1, const pair<int, int>&p2){
        return p1.second < p2.second;
    });

    int time = 0, cnt=0;
    for(int i = 0; i < n; i++){
        if(v[i].first >= time){
            cnt++;
            time = v[i].second;
        }
    }
    cout << cnt << endl;


}