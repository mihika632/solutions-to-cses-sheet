#include<bits/stdc++.h>
using namespace std;
vector<string>f(int n){
    if(n == 1) return {"0", "1"};

    vector<string>prev = f(n-1);
    vector<string>res;

    for(auto it : prev) res.push_back("0"+it);
    reverse(prev.begin(), prev.end());
    for(auto it : prev) res.push_back("1"+it);
    return res;
}
int main(){
    int n ;
     cin >> n;
     vector<string>ans=f(n);
     for(auto it : ans) cout << it << endl;
     return 0;
     
     
}