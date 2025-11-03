#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int numberOfQueue, testCase;
    cin >> numberOfQueue >> testCase;
    vector<priority_queue<int>> pq(numberOfQueue);
    while (testCase--)
    {
        int operation, pqNum;
        cin >> operation >> pqNum;
        if(operation == 0){
            int val;
            cin >> val;
            pq[pqNum].push(val);
        }
        else if(operation == 1){
            if(!pq[pqNum].empty()){
                cout << pq[pqNum].top() << '\n';
            }
        }
        else{
            if(!pq[pqNum].empty()){
                pq[pqNum].pop();
            }
        }
    }
    return 0;
}