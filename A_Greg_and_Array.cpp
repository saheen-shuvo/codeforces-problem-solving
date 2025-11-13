#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n, k;
    cin >> n >> m >> k;
    vector<long long> a(n+2), change(n+2, 0), change_on_query(m+2, 0);
    vector<pair<pair<long long, long long>, long long>> query(m+2);
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    for(int i=1; i<=m; i++){
        cin >> query[i].first.first >> query[i].first.second >> query[i].second;
    }
    while(k--){
        int l, r;
        cin >> l >> r;
        change_on_query[l]++;
        change_on_query[r+1]--;
    }
    long long c = 0;
    for(int i=1; i<=m; i++){
        c+= change_on_query[i];
        change[query[i].first.first] += query[i].second * c;
        change[query[i].first.second + 1] -= query[i].second * c;
    }
    c = 0;
    for(int i=1; i<=n; i++){
        c+= change[i];
        a[i] += c;
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}