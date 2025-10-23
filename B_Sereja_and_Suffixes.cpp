#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<int> ds(n + 2, 0);
    vector<bool> vis(100001, false);
    int count = 0;
    for (int i = n; i >= 1; i--)
    {
        if (!vis[a[i]])
        {
            vis[a[i]] = true;
            count++;
        }
        ds[i] = count;
    }
    while (m--)
    {
        int l;
        cin >> l;
        cout << ds[l] << "\n";
    }
    return 0;
}
