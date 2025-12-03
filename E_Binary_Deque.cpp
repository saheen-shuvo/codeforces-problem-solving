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
        int n, targetedSum;
        cin >> n >> targetedSum;
        vector<int> a(n);
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total += a[i];
        }
        if (total < targetedSum)
        {
            cout << -1 << '\n';
            continue;
        }
        if (targetedSum == 0)
        {
            cout << 0 << '\n';
            continue;
        }
        int l = 0, sum = 0, len = -1;
        for (int r = 0; r < n; r++)
        {
            sum += a[r];
            while (sum > targetedSum)
            {
                sum -= a[l];
                l++;
            }
            if (sum == targetedSum)
            {
                len = max(len, r - l + 1);
            }
        }
        if (len == -1)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << n - len << "\n";
        }
    }
    return 0;
}