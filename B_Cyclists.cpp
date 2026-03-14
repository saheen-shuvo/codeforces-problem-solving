#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k, p, m;
        cin >> n >> k >> p >> m;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        int special = a[p];
        vector<int> prevSpecial;
        for (int i = 1; i < p; i++) {
            prevSpecial.push_back(a[i]);
        }
        sort(prevSpecial.begin(), prevSpecial.end());
        int reqBefore = 0;
        if (p > k) {
            reqBefore = p - k;
        }
        int beforeCost = 0;
        for (int i = 0; i < reqBefore; i++) {
            beforeCost += prevSpecial[i];
        }
        vector<int> restCards;
        for (int i = 1; i <= n; i++) {
            if (i != p) {
                restCards.push_back(a[i]);
            }
        }
        sort(restCards.begin(), restCards.end());
        int needRepeat = n - k;
        int repeatHelperCost = 0;
        for (int i = 0; i < needRepeat; i++) {
            repeatHelperCost += restCards[i];
        }
        int firstPlayCost = beforeCost + special;
        int repeatPlayCost = repeatHelperCost + special;
        if (firstPlayCost > m) {
            cout << 0 << '\n';
            continue;
        }
        int ans = 1;
        m -= firstPlayCost;
        ans += m / repeatPlayCost;
        cout << ans << '\n';
    }
    return 0;
}
