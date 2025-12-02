#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long ans = 0;
    map<int, int> freq;
    int dis = 0;
    int r = 0;
    for (int l = 0; l < n; l++)
    {
        while (r < n)
        {
            if (freq[a[r]] == 0)
            {
                if (dis == k)
                {
                    break;
                }
                dis++;
            }
            freq[a[r]]++;
            r++;
        }
        ans += (r - l);
        freq[a[l]]--;
        if (freq[a[l]] == 0)
        {
            dis--;
        }
    }
    cout << ans;
    return 0;
}
