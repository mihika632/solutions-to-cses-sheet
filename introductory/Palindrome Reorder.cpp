#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s;
    cin >> s;
    unordered_map<char, int> m;
    for(char c: s){
        m[c]++;
    }
    int cnt = 0;
    for(auto it: m){
      if(it.second%2 == 1)
        cnt++;
       } 
         if(cnt > 1){
        cout << "NO SOLUTION" << endl;    
    return 0;}
     
    
    int n = s.size();
    string ans(n, ' ');
    int left = 0, right = n-1;
    for(auto it : m){
        if(it.second%2 != 0){
          it.second--;
          ans[n/2] = it.first;
        }
        while(it.second>0){
            ans[left++] = ans[right--] = it.first;
            it.second -= 2;
        }
    } cout << ans << endl;
}