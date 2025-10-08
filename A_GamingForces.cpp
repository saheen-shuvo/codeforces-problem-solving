#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int h, h1 = 0;
        for(int i = 0; i < n; i++){
            cin >> h;
            if(h == 1){
                h1++;
            }
        }
        int ans = n;
        int kill = h1/2;
        ans = ans - kill;
        cout << ans << endl;
    }
    return 0;
}