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
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> last(n + 1, -1); 
        for (int i = 0; i < n; i++) {
            last[a[i]] = i;
        }
        int res = 0;
        int max_last = -1;
        for (int i = 0; i < n; i++) {
            max_last = max(max_last, last[a[i]]);
            if (i == max_last) res++;
        }
        cout << res << "\n";
    }
    return 0;
}
