#include <bits/stdc++.h>
 
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
 
using namespace std;
 
int t, n;
int32_t main() {_
    cin >> t;
 
    while(t--) {
        cin >> n;   
 
        vector<int> b(n+2);
        int sa = 0;
        for(int i = 0; i < n+2; i++) {
            cin >> b[i];
        }
        sort(b.begin(), b.end());
 
        for(int i = 0; i < n; i++) {
            sa += b[i];
        }
        bool foi = false;
 
        if(sa == b[n]) {
            for(int i = 0; i < n; i++) {
                cout << b[i] << " ";
            }
            cout << endl;
            foi = true;
            continue;
        }
 
        sa += b[n];
        
        for(int i = 0; i < n+1; i++) {
            if(sa - b[i] == b[n+1]) {
                for(int j = 0; j < n+1; j++) {
                    if(i != j) cout << b[j] << " ";
                }
                cout << endl;
                foi = true;
                break;
            }
        }
 
        if(!foi) cout << -1 << endl;
    }
 
}