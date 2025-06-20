#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long sum = 1LL * n * (n + 1) / 2;  // Calculate sum of first N natural numbers
    
    if (sum % 2 != 0) {
        cout << "NO" << endl;
    } 
    else {
        cout << "YES" << endl;
        
        vector<int> set1, set2;
        long long target = sum / 2;
        long long currentSum = 0;
        
        // Start from largest number and keep adding until half sum is reached
        for (int i = n; i >= 1; i--) {
            if (currentSum + i <= target) {
                set1.push_back(i);
                currentSum += i;
            } else {
                set2.push_back(i);
            }
        }
        
        // Print the two sets
        cout << set1.size() << endl;
        for (int num : set1) cout << num << " ";
        cout << endl;

        cout << set2.size() << endl;
        for (int num : set2) cout << num << " ";
        cout << endl;
    }

    return 0;
}
