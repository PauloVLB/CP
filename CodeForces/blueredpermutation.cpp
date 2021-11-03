#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int t;

int main() {_ 
    cin >> t;

    while(t--) {
        int n;  cin >> n;
        vector<int> v(n), r, b;

        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for(int i = 0; i < n; i++) {
            char c; cin >> c;
            if(c == 'R') {
                r.push_back(v[i]);
            } else {
                b.push_back(v[i]);
            }
        }
        
        sort(r.begin(), r.end());
        sort(b.begin(), b.end());

        int pb = 0;
        int pr = 0;
        bool possivel = true;
        
        for(int i = 1; i <= n; i++) {
            if(pb < (int) b.size() && b[pb] >= i) {
                pb++;
                continue;
            }
            if(pr < (int) r.size() && r[pr] <= i) {
                pr++;
                continue;
            }
            possivel = false;
        }

        cout << (possivel ? "YES" : "NO") << endl;
    }
}