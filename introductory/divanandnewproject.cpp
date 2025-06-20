#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];

        vector<pair<int, int>>v;
        for(int i = 0; i < n; i++) v[i] = {a[i],i};
        sort(v.rbegin(), v.rend());

        vector<int>cordinates(n+1);
        cordinates[0] = -1;

        int left = -1, right = -1;
        for(int i = 0; i < n; i++){
            if(i%2==0){

            }
            else{
                
            }
        }

    }
}