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
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        unordered_map<int, int> freq;
        for (int x : a)
        {
            freq[x]++;
        }
        int distinct_remaining = (int)freq.size();
        int need = distinct_remaining;
        unordered_set<int> seen;
        int ans = 0;
        for (int i = n - 1; i >= 0; --i)
        {
            if (!seen.count(a[i]))
            {
                seen.insert(a[i]);
            }
            freq[a[i]]--;
            if (freq[a[i]] == 0)
            {
                distinct_remaining--;
            }
            if ((int)seen.size() == need)
            {
                ++ans;
                seen.clear();
                need = distinct_remaining;
                if (need == 0)
                {
                    break;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
