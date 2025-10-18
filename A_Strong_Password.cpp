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
        string s;
        cin >> s;
        if (s.length() == 1)
        {
            s += (s[0] == 'a' ? 'b' : 'a');
        }
        else
        {
            bool ok = false;
            for (int i = 0; i < s.length() - 1; i++)
            {
                if (s[i] == s[i + 1])
                {
                    s.insert(i + 1, 1, (s[i] == 'a' ? 'b' : 'a'));
                    ok = true;
                    break;
                }
            }
            if (!ok)
                s += (s.back() == 'a' ? 'b' : 'a');
        }
        cout << s << "\n";
    }
    return 0;
}
