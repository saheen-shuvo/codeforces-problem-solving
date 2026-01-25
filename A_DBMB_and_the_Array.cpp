#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n, s, x;
        cin >> n >> s >> x;
        int sumA = 0;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            sumA += a;
        }
        int dbmb = s - sumA;
        if(dbmb == 0){
            cout << "YES\n";
        }
        else if(dbmb < 0){
            cout << "NO\n";
        }
        else{
            if(dbmb % x == 0){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}