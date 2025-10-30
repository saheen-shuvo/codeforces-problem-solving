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
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        int f = 0, e = n - 1;
        multiset<int> s(v.begin(), v.end());
        while (f < e) {
            int mn = *s.begin();
            int mx = *s.rbegin();
            if (v[f] == mn || v[f] == mx) {
                s.erase(s.find(v[f]));
                f++;
            }
            else if (v[e] == mn || v[e] == mx) {
                s.erase(s.find(v[e]));
                e--;
            }
            else {
                break;
            }
        }
        if (f >= e) cout << -1 << "\n";
        else cout << f + 1 << " " << e + 1 << "\n";
    }
    return 0;
}
