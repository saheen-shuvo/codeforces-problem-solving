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
        int maxVal = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            maxVal = max(maxVal, x);
        }
        cout << maxVal << "\n";
    }
    return 0;
}
