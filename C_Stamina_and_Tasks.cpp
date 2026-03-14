#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> c(n + 1), p(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> c[i] >> p[i];
        }
        vector<double> dp(n + 2, 0.0);
        for (int i = n; i >= 1; i--) {
            double q = 1.0 - p[i] / 100.0;
            double skip = dp[i + 1];
            double take = c[i] + q * dp[i + 1];
            dp[i] = max(skip, take);
        }
        cout << fixed << setprecision(10) << dp[1] << '\n';
    }

    return 0;
}
