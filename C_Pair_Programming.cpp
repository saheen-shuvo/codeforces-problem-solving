#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int k, n, m;
        cin >> k >> n >> m;

        int arrA[n], arrB[m], merged[n + m];
        int invalid = 0;
        for (int &x : arrA)
            cin >> x;
        for (int &x : arrB)
            cin >> x;
        merge(arrA, arrA + n, arrB, arrB + m, merged);
        for (int x : merged)
        {
            if (x == 0)
                k++;
            if (x > k)
                invalid = 1;
        }
        if (invalid)
        {
            cout << -1;
        }
        else
        {
            for (int x : merged)
                cout << x << " ";
        }
        cout << "\n";
    }
}
