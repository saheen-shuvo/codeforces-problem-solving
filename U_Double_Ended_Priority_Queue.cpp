#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, Q;
    cin >> N >> Q;
    multiset<int> dpq;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        dpq.insert(x);
    }
    while (Q--)
    {
        int command;
        cin >> command;
        if (command == 0)
        {
            int val;
            cin >> val;
            dpq.insert(val);
        }
        else if (command == 1)
        {
            if (!dpq.empty())
            {
                cout << *dpq.begin() << '\n';
                dpq.erase(dpq.begin());
            }
        }
        else if (command == 2)
        {
            if (!dpq.empty())
            {
                cout << *dpq.rbegin() << '\n';
                dpq.erase(prev(dpq.end()));
            }
        }
    }
    return 0;
}