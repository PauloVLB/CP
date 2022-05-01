#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>
#define int long long

using namespace std;

int32_t main() {_ 
    int q; cin >> q;

    queue<pair<int, int>> s;

    while(q--) {
        int op; cin >> op;

        if(op == 1) {
            int x, c; cin >> x >> c;
            s.push({c, x});
        } else {
            int c; cin >> c;
            
            int ans = 0;
            while(c > s.front().first) {
                ans += s.front().second * s.front().first;
                c -= s.front().first;
                s.pop();
            }

            ans += s.front().second * c;
            s.front().first -= c;
            if(s.front().first == 0) s.pop();

            cout << ans << endl;
        }
    }
}