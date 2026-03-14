#include <iostream>
#include <unordered_map>
#include <algorithm>
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
        unordered_map<int, int> fre;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int x;
                cin >> x;
                mx = max(mx, ++fre[x]);
            }
        }
        int limit = n * (n - 1);
        if (mx <= limit)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
