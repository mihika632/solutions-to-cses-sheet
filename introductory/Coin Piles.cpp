#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int sum = a+b;
        int diff = abs(a-b);
        if(sum%3 == 0 and diff <= sum/3)
            cout << "YES" << endl;
            else 
        cout << "NO" << endl;
    }

}