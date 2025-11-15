#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1), pre_sum(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pre_sum[i] = pre_sum[i - 1] + a[i];
        }
        string s;
        cin >> s; 
        int left = 0;      
        int right = n - 1;  
        long long result = 0;
        while (left < right) {
            while (left < right && s[left] == 'R')
                left++;
            while (left < right && s[right] == 'L')
                right--;
            if (left < right) {
                int Lpos = left + 1;    
                int Rpos = right + 1;
                result += pre_sum[Rpos] - pre_sum[Lpos - 1];

                left++;
                right--;
            }
        }
        cout << result << "\n";
    }

    return 0;
}
