#include<bits/stdc++.h>
using namespace std;

bool isValidTMT(string &s) {
    int t_count = 0, m_count = 0;

    for (char c : s) {
        if (c == 'T') {
            t_count++;
        } else if (c == 'M') {
            m_count++;
            if (m_count > t_count) {
                return false; 
            }
        }
    }

    t_count = 0;
    m_count = 0;

    for (int i = s.size() - 1; i >= 0; --i) {
        if (s[i] == 'T') {
            t_count++;
        } else if (s[i] == 'M') {
            m_count++;
            if (m_count > t_count) {
                return false; 
            }
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int t_count = count(s.begin(), s.end(), 'T');
        int m_count = count(s.begin(), s.end(), 'M');

        if (t_count != 2 * m_count) {
            cout << "NO\n";
        } else if (isValidTMT(s)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
