#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    cin.ignore(); 
    while (q--) {
        string s;
        getline(cin, s);
        vector<pair<int, char>> lower; 
        vector<pair<int, char>> upper; 
        vector<char> res(s.size(), 0); 
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (c == 'b') {
                if (!lower.empty()) {
                    auto p = lower.back();
                    lower.pop_back();
                    res[p.first] = 0; 
                }
            } 
            else if (c == 'B') {
                if (!upper.empty()) {
                    auto p = upper.back();
                    upper.pop_back();
                    res[p.first] = 0; 
                }
            } 
            else {
                res[i] = c;
                if (islower(c)) lower.push_back({i, c});
                else if (isupper(c)) upper.push_back({i, c});
            }
        }
        for (char c : res) {
            if (c != 0) cout << c;
        }
        cout << "\n";
    }
    return 0;
}
