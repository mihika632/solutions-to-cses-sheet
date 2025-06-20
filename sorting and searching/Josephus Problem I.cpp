#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;

    queue<int> q;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    vector<int> result;

    while (!q.empty()) {
        int first = q.front(); 
        q.pop();
        if (q.empty()) {
            result.push_back(first);
            break;
        }
        int second = q.front(); 
        q.pop();
        result.push_back(second);
        q.push(first);
    }

    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
