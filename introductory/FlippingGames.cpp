#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int totones = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
            totones++;
    }
    if (totones == n){
        cout << totones - 1 << endl;
        return 0;}
    
        int mx = 0;
        int currgain = 0;
        for (int i = 0; i < n; i++)
        {
            int val = (v[i] == 0) ? 1 : -1;
            currgain = max(val, currgain + val);
            mx = max(mx, currgain);
        }
        cout << mx + totones << endl;
    
    return 0;
}