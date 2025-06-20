#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int n;
    cin >> n;
    vector<int>v(n+1), ans(n+1);
    for(int i = 1;i <= n;i++) cin >> v[i];
    stack<int>st;
    for(int i = 1; i <= n; i++){
        while(!st.empty() and v[st.top()]>=v[i]) st.pop();
        if(st.empty()) ans[i]=0;
        else ans[i] = st.top();
        st.push(i);
    } 
    for(int i = 1; i <= n; i++) cout << ans[i] << " ";
    cout << endl;
}