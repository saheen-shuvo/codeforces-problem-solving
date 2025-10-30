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

        int l = -1, r = -1;

        // We just need to find a triplet (a[i-1], a[i], a[i+1])
        // where the middle element is not smallest or largest
        for (int i = 1; i + 1 < n; i++) {
            int x = a[i - 1], y = a[i], z = a[i + 1];

            if ((y > x && y > z) || (y < x && y < z)) {
                // Middle is extreme → bad
                continue;
            } else {
                // Found a valid one
                l = i;       // 1-based
                r = i + 2;
                break;
            }
        }

        if (l == -1) cout << -1 << "\n";
        else cout << l << " " << r << "\n";
    }

    return 0;
}
