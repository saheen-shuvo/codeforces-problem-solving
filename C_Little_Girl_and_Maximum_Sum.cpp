#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<int> v(n+1);
    for(int i=1; i<n+1; i++){
        cin >> v[i];
    }
    vector<int> d(n+2);
    for(int i=0; i<q; i++){
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r+1]--;
    }
    for(int i=1; i<d.size(); i++){
        d[i] = d[i-1] + d[i];
    }
    sort(d.rbegin(), d.rend());
    sort(v.rbegin(), v.rend());
    long long ans=0;
    for(int i=0; i<n; i++){
        ans = ans + (1LL * d[i] * v[i]);
    }
    cout << ans;
    return 0;
}