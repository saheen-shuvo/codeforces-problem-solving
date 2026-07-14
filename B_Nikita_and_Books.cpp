#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool isOk = true;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] < i + 1) {
                isOk = false;
                break;
            }
            long long extra = a[i] - (i + 1);
            a[i + 1] += extra;
        }
        if (isOk && a[n - 1] < n)
            isOk = false;
        cout << (!isOk ? "NO" : "YES") << '\n';
    }
    return 0;
}
