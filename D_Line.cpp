#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, i, real_val, mx, sz;
    string s;
    vector<long long> ans;
    long long sum;
    vector<int> val_box;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        ans.clear();
        val_box.clear();
        val_box.resize(n + 1);
        i = 0;
        sum = 0;
        priority_queue<pair<int, int>> pq;
        while (i < n)
        {
            if (s[i] == 'L')
            {
                real_val = i;
            }
            else
            {
                real_val = n - 1 - i;
            }
            sum += real_val;
            val_box[i] = real_val;
            mx = max(i, n - 1 - i);
            if (real_val != mx)
            {
                pq.push({mx, i});
            }
            i++;
        }
        while (!pq.empty())
        {
            sum += pq.top().first;
            sum -= val_box[pq.top().second];
            pq.pop();
            ans.push_back(sum);
        }
        i = 0;
        sz = ans.size();
        if (sz > 0)
        {
            while (i < n)
            {
                cout << ((i + 1) <= sz ? ans[i] : ans.back()) << " ";
                i++;
            }
        }
        else
        {
            while (n--)
            {
                cout << sum << " ";
            }
        }
        cout << '\n';
    }
    return 0;
}
