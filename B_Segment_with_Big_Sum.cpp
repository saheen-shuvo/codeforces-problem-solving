#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, s;
    cin >> n >> s;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long sum = 0, ans = LLONG_MAX;
    int l = 0, r = 0;
    while (r < n)
    {
        sum += a[r];
        while(sum >= s){
            ans = min(ans, (long long)(r-l+1));
            sum -= a[l];
            l++;
        }
        r++;
    }
    if(ans == LLONG_MAX){
        cout << -1;
    }
    else{
        cout << ans;
    }
    return 0;
}
