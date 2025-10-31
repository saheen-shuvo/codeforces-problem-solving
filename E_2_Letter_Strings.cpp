#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        long long ans = 0;
        unordered_map<string, long long> freq;
        for (auto s : v) {
            for (char c = 'a'; c <= 'k'; c++) {
                if (c != s[0]) {
                    string temp = string(1, c) + s[1];
                    ans += freq[temp];
                }
            }
            for (char c = 'a'; c <= 'k'; c++) {
                if (c != s[1]) {
                    string temp = string(1, s[0]) + c;
                    ans += freq[temp];
                }
            }
            freq[s]++;
        }
        cout << ans << "\n";
    }
}
