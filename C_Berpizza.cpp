#include <bits/stdc++.h>
using namespace std;
struct cmp {
    bool operator()(pair<int,int>& a, pair<int,int>& b) {
        if (a.first == b.first)
            return a.second > b.second; 
        return a.first < b.first; 
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    queue<int> monoQ; 
    priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> polyQ;
    vector<bool> served(q + 5, false);
    int customerCount = 0;
    for (int i = 0; i < q; i++) {
        int type;
        cin >> type;
        if (type == 1) {
            int m;
            cin >> m;
            customerCount++;
            monoQ.push(customerCount);
            polyQ.push({m, customerCount});
        }
        else if (type == 2) {
            while (served[monoQ.front()]) monoQ.pop();
            int idx = monoQ.front();
            monoQ.pop();
            served[idx] = true;
            cout << idx << " ";
        }
        else if (type == 3) {
            while (served[polyQ.top().second]) polyQ.pop();
            int idx = polyQ.top().second;
            polyQ.pop();
            served[idx] = true;
            cout << idx << " ";
        }
    }
    return 0;
}
