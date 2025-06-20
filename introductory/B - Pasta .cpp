#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int main()
{
    long long int n, m;
    cin >> n >> m;

    vector<long long int> v1(n);
    vector<long long int> v2(m);

    for (auto &it : v1)
    {
        cin >> it;
    }

    for (auto &it : v2)
    {
        cin >> it;
    }

    bool flag = false;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v2[i] == v1[j])
            {
                v1[j] = -1;
                break;
            }
        }
    }

    long long int cnt=0;
    for(int i=0;i<n;i++) if(v1[i]==-1) cnt++;
    

    if (cnt==m) cout << "Yes" << endl;
    
    else
    cout << "No" << endl;
    

    return 0;
}