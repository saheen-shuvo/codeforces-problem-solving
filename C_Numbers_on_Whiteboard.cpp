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
        int x = n;
        cout << 2 << "\n";
        for(int i=n-1; i>=1; i--){
            cout << i << " " << x << "\n";
            x = ceil((x+i)/2.0);
        }
    }
    return 0;
}