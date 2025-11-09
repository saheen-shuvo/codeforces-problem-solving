#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int k;
    cin >> k;
    int l = 0, r = 0;
    queue<int> q; 
    while (r < n)
    {
        if (v[r] < 0)
            q.push(r);
        if ((r - l + 1) == k)
        {
            if (!q.empty())
                cout << v[q.front()] << " ";
            else
                cout << 0 << " ";
            if (!q.empty() && q.front() == l)
                q.pop();
            l++;
        }
        r++;
    }
    return 0;
}
