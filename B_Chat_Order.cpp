#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> msg(n);
    for (int i = 0; i < n; i++)
    {
        cin >> msg[i];
    }
    map<string, bool> seen;
    vector<string> res;
    for (int i = n - 1; i >= 0; i--)
    {
        if (!seen[msg[i]])
        {
            seen[msg[i]] = true;
            res.push_back(msg[i]);
        }
    }
    for (auto name : res)
        cout << name << "\n";
    return 0;
}
