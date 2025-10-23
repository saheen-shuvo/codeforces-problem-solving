#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin(), a.end());
    int day = 1; 
    for (int i = 0; i < n; ++i) {
        if (a[i] >= day) {
            ++day; 
        }
    }
    cout << (day - 1) << '\n'; 
    return 0;
}
