#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int t, n, x, m = 200005, ans = -1;
vector<int> pos[200005];

int main() {_
    cin >> t;

    while(t--) {
        cin >> n;
        for(int i = 1; i <= n; i++) {
            cin >> x;
            pos[x].push_back(i);
        }
        for(int i = 1; i <= n; i++) {
            if(pos[i].size() == 1) {
                if(i < m) {
                    m = i;
                    ans = pos[i][0];
                }
            }
        }

        cout << ans << endl;
        for(int i = 1; i <= n; i++) {
            pos[i].clear();
        }
        m = 200005;
        ans = -1;
    }
    return 0;
}