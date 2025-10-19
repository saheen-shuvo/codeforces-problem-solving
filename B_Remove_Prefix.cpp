#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        deque<int> dq(n);
        for(int i=0; i<n; i++){
            cin >> dq[i];
        }
        int count = 0;
        unordered_map<int, bool> mp;
        for(int i=n-1; i>=0; i--){
            if(mp[dq[i]] == true){
                dq.pop_front();
                count++;
            }
            else{
                mp[dq[i]] = true;
            }
        }
        cout << count << "\n";
    }
    return 0;
}