#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
   vector<tuple<int, int, int >>customers(n);
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        customers[i]={a,b,i};
    }
    sort(customers.begin(), customers.end());
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    vector<int>ans(n);
    int cnt = 0;
    for(auto [a,b,i] : customers){
        if(!pq.empty() and pq.top().first < a){
            auto[dep,room] = pq.top();
            pq.pop();
            ans[i]= room;
            pq.push({b,room});
        }
        else{
            cnt++;
            ans[i]=cnt;
            pq.push({b,cnt});
        }
    }
    cout << cnt<< endl;
    for(int x: ans) cout << x << ' ';
    cout << endl;

    
}