#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

int t;
int main() {_ 
    cin >> t;

    while(t--) {
        int k, n, m; cin >> k >> n >> m;
        vector<int> a(n), b(m);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(int i = 0; i < m; i++) {
            cin >> b[i];
        }   

        vector<int> ans;
        int pa = 0, pb = 0;
        bool ok = 1;
        while(pa < n || pb < m) {
            if(pa < n && a[pa] == 0) {
                ans.push_back(0);
                pa++;
                k++;
            } else if(pb < m && b[pb] == 0) {
                ans.push_back(0);
                pb++;
                k++;
            } else if(pa < n && a[pa] <= k) {
                ans.push_back(a[pa]);
                pa++;
            } else if(pb < m && b[pb] <= k) {
                ans.push_back(b[pb]);
                pb++;
            } else {
                ok = 0;
                break;
            }
        }

        if(!ok) cout << -1 << endl;
        else {
            for(int x : ans) {
                cout << x << " ";
            }
            cout << endl;
        }
    }
}