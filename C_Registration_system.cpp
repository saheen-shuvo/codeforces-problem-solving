#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    unordered_map<string, int> used;
    while (n--)
    {
        string s;
        cin >> s;
        if (used.find(s) == used.end())
        {
            cout << "OK\n";
            used[s] = 1;
        }
        else
        {
            cout << s << used[s] << "\n";
            used[s + to_string(used[s])] = 1;
            used[s]++;
        }
    }
    return 0;
}
