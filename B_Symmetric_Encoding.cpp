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
        cin  >> n;
        string s;
        cin >> s;
        string temp = s;
        sort(temp.begin(), temp.end());
        temp.erase(unique(temp.begin(),temp.end()), temp.end());
        map<char, char> enc;
        for(int i=0; i<temp.length(); i++){
            enc[temp[i]] = temp[temp.length() - 1 - i];
        };
        string decoded = "";
        for(char c : s){
            decoded += enc[c];
        }   
        cout << decoded << "\n";
    }
    return 0;
}