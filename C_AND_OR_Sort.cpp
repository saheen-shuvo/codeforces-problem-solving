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
        string s;
        cin >> s;
        int total0 = 0;
        for (char c : s)
        {
            if (c == '0')
            {
                total0++;
            }
        }
        if (s[0] == '1')
        {
            cout << total0 << '\n';
            continue;
        }
        int before1 = 0;
        int after0 = total0;
        int ans = n;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                after0--;
            }
            int cost = before1 + after0;
            ans = min(ans, cost);
            if (s[i] == '1')
            {
                before1++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

