#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        long long x = abs(a - b);
        long long y = abs(a - b + c);
        long long ans = max(x, y);
        cout << ans << '\n';
    }
    return 0;
}
