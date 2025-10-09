#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            b[i] = (n - a[i])+1;
        }
        for(int i=0; i<n; i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

