#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq;
    int n, srija = 0, dima = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        dq.push_back(x);
    }
    for(int i=0; i<n; i++){
        if(i % 2 == 0){
            if(dq.front() > dq.back()){
                srija += dq.front();
                dq.pop_front();
            }
            else{
                srija += dq.back();
                dq.pop_back();
            }
        }
        else{
            if(dq.front() > dq.back()){
                dima += dq.front();
                dq.pop_front();
            }
            else{
                dima += dq.back();
                dq.pop_back();
            }
        }
    }
    cout << srija << " " << dima << endl;
    return 0;
}
