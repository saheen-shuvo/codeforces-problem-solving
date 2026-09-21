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
        int n;
        cin >> n;
        int a1, a2, a3;
        cin >> a1 >> a2 >> a3;
        int s;
        s = min({a1, a2, a3});
        int w;
        w = n - s;
        cout << w << '\n';
    }
    return 0;
}
