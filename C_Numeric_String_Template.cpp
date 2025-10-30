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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int m;
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;
            if ((int)s.size() != n)
            {
                cout << "NO\n";
                continue;
            }
            map<char, int> charToNum;
            map<int, char> numToChar;
            int flag = 1;
            for (int i = 0; i < n; i++)
            {
                char c = s[i];
                int num = v[i];
                if ((charToNum.count(c) && charToNum[c] != num) ||
                    (numToChar.count(num) && numToChar[num] != c))
                {
                    flag = 0;
                    break;
                }
                charToNum[c] = num;
                numToChar[num] = c;
            }
            cout << (flag ? "YES\n" : "NO\n");
        }
    }
    return 0;
}
