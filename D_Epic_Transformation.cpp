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
        map<int, int> mp;
        int maxFreq = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            maxFreq = max(maxFreq, mp[x]);
        }
        int ans;
        if (maxFreq <= n / 2)
        {
            ans = n % 2;
        }
        else
        {
            ans = 2 * maxFreq - n;
        }
        cout << ans << "\n";
    }
    return 0;
}