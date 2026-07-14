#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int maxLength = 0;
        int currentLength = 0;
        for (char c : s) {
            if (c == '#') {
                currentLength++;
                maxLength = max(maxLength, currentLength);
            } else {
                currentLength = 0;
            }
        }
        cout << (maxLength + 1) / 2 << '\n';
    }
    return 0;
}
