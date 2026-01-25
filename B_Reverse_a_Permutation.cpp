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
        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
        }
        vector<int> sufMax(n + 2, -1);
        vector<int> posMax(n + 2, -1);
        for (int i = n; i >= 1; i--)
        {
            if (p[i] > sufMax[i + 1])
            {
                sufMax[i] = p[i];
                posMax[i] = i;
            }
            else
            {
                sufMax[i] = sufMax[i + 1];
                posMax[i] = posMax[i + 1];
            }
        }
        int l = -1, r = -1;
        for (int i = 1; i <= n; i++)
        {
            if (sufMax[i] > p[i])
            {
                l = i;
                r = posMax[i]; 
                break;
            }
        }
        if (l != -1)
        {
            reverse(p.begin() + l, p.begin() + r + 1);
        }
        for (int i = 1; i <= n; i++)
        {
            cout << p[i];
            if (i == n){
                cout << '\n';
            }
            else{
                cout << ' ';
            }
        }
    }
    return 0;
}
