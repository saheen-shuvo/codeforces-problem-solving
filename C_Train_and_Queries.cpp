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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        map<int, int> f, l;
        for (int i = 0; i < n; i++)
        {
            if (!f.count(v[i]))
            {
                f[v[i]] = i;
            }
            l[v[i]] = i;
        }
        while (k--)
        {
            int a, b;
            cin >> a >> b;
            if (f.count(a) && l.count(b) && f[a] < l[b])
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
