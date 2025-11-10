#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    map<int, int> d;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }
    long long sum = 0;
    cout << '\n';
    for (auto [key, val] : d)
    {
        sum += val;
        if(sum > 2){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}