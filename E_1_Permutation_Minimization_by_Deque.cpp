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
        deque<int> dq;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        for(int i =0; i<n; i++){
            int x = v[i];
            if(i == 0){
                dq.push_back(x);
            }
            else{
                if(x <= dq.front()){
                    dq.push_front(x);
                }
                else{
                    dq.push_back(x);
                }
            }
        }
        for(auto it : dq){
            cout << it << " ";
        }
        cout << "\n";
        dq.clear();
    }
    return 0;
}
