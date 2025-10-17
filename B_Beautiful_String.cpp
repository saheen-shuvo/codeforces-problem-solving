#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    string r = s;
    reverse(r.begin(), r.end());
    return s == r;
}
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
        if (isPalindrome(s))
        {
            cout << 0 << "\n";
            continue;
        }
        vector<int> idx;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                idx.push_back(i + 1);
            }
        }
        cout << idx.size() << "\n";
        for (int i = 0; i < idx.size(); i++)
        {
            cout << idx[i] << " ";
        }
        if (!idx.empty())
            cout << "\n";
    }
    return 0;
}
