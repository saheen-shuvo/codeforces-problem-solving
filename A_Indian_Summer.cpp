#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<string, map<string, bool>> mp;
    int count = 0;
    for (int i = 0; i < n; i++) {
        string species, color;
        cin >> species >> color;
        if (!mp[species][color]) {
            mp[species][color] = true;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
