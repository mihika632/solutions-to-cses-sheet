#include<bits/stdc++.h>
using namespace std;
set < string > solve(string s){
    set < string > ans;
    sort(s.begin(), s.end());
    do{
        ans.insert(s);
    }
    while(next_permutation(s.begin(), s.end()));
    return ans;
}
int main(){
    string s;
    cin >> s;
    set < string > ans = solve(s);
    cout << ans.size() << endl;
    for(auto it : ans) cout << it << endl;

}