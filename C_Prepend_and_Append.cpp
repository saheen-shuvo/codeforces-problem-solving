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
        string s;
        cin >> s;
        int count=0;
        for(int i=0, j=s.size()-1; i<=j; i++, j--){
            if(s[i] != s[j]){
                count+=2;
            }
            if(s[i] == s[j]){
                break;
            }
        }
        cout << n-count << '\n';
    }
    return 0;
}