#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
int f(int i, int j, vector<int>&v, vector<vector<int>>&dp){
    if(i == 0) {
        if(j == 0) return 1;
        else return 0;
    }

    if(dp[i][j]==-1) return dp[i][j];
    int notpick = f(i-1,j,v, dp);
    int pick=0;
    if(j >= v[i]) pick = f(i-1, j-v[i],v, dp[i][j]);
    return dp[i][j]= pick + notpick;
}
int main() {
    int n;
    cin >> n;
    int target;
    cin >> target;
    vector<int>v(n);
    vector<vector<int>>dp(n,vector<int>(target+1,-1));
    for(int i = 0;i < n; i++) cin >> v[i];
    cout << f(n-1, target, v, dp); 


}