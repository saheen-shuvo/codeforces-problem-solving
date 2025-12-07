#include <bits/stdc++.h>
using namespace std;

long long gcd_vector(const vector<long long>& v, int start) {
    long long g = v[start];
    for (int i = start + 2; i < v.size(); i += 2) {
        g = gcd(g, v[i]);
    }
    return g;
}
bool isValid(const vector<long long>& v, long long d, int start) {
    for (int i = start; i < v.size(); i += 2) {
        if (v[i] % d != 0) return false; 
    }
    for (int i = 1 - start; i < v.size(); i += 2) {
        if (v[i] % d == 0) return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        long long odd = gcd_vector(v, 0);   
        long long even = gcd_vector(v, 1);  
        long long ans = 0;
        if (isValid(v, odd, 0)) ans = odd;
        else if (isValid(v, even, 1)) ans = even;
        cout << ans << "\n";
    }
    return 0;
}
