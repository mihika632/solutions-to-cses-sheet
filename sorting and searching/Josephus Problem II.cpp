#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define pii pair<int,int>
#define vi vector<int>
#define vll vector<ll>
#define mll map<ll,ll>
int main(){
    ll n, k;
     cin >> n >> k;
     set < ll > circles;
     for(ll i = 1; i <= n; i++) circles.insert(i);
    auto it = circles.begin();

    while(!circles.empty()){
        ll rem = circles.size();
        ll steps = k%rem;
        for(ll i = 0; i < steps; i++){
            it++;
            if(it ==  circles.end()) it = circles.begin();
            
        }

        cout << *it << " ";
        it = circles.erase(it);
        if(it == circles.end()) it = circles.begin();
    }
    cout << endl;
    return 0;

}