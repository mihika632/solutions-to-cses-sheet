#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
     cin >> n;
     vector<int>a(n);
     for(int i = 0; i < n; i++) cin >> a[i];

     int cnt = 1;
     vector<int>pos(n+1);
     for(int i = 0; i < n; i++) pos[a[i]] = i;

      for(int i = 2; i <= n; i++){
      if(pos[i]<pos[i-1]) cnt++;
     }
    cout << cnt << endl;


}