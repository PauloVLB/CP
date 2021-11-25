#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f

using namespace std;

int t;

int main() {_ 
    cin >> t;

    while(t--) {
        int n; cin >> n;
        
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        if(v[0] == n || v[n-1] == n) {
            reverse(v.begin(), v.end());
            for(int x : v) {
                cout << x << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
}