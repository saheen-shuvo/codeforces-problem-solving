#include <bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, s = 0, c = 0, p = 0, x;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> x;
            s += abs(x);
            if (x < 0)
                p = 1;
            else if (x > 0)
            {
                c += p;
                p = 0;
            }
        }
        c += p;
        cout << s << " " << c << "\n";
    }
}
