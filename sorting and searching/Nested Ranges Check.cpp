#include<bits/stdc++.h>
using namespace std;

struct range{
    int left, right, index;
    bool operator<(const range &other) const{
        if(left == other.left) return right > other.right;
        return left < other.left;
    } 
};

int main(){
    int n;
    cin >> n;
    vector<range> ranges(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> ranges[i].left >> ranges[i].right;
        ranges[i].index = i;
    }

    vector<int> contained(n, 0), contains(n, 0);
    sort(ranges.begin(), ranges.end());
    int cnt1=0, cnt2=0;
    int mxend = INT_MIN; // ✅ fix
    for(int i = 0; i < n; i++){
        if(ranges[i].right <= mxend){
            cnt1++;
            contained[ranges[i].index] = cnt1;}
        mxend = max(mxend, ranges[i].right);
    }
    int cnt = 0;
    int mnend = INT_MAX; // ✅ fix
    for(int i = n - 1; i >= 0; i--){
        if(ranges[i].right >= mnend){
            cnt2++;
            contains[ranges[i].index] = cnt2;}
        mnend = min(mnend, ranges[i].right);
    }

    for(int i = 0; i < n; i++) cout << contains[i] << " ";
    cout << "\n";
    for(int i = 0; i < n; i++) cout << contained[i] << " ";
    cout << "\n";
}
