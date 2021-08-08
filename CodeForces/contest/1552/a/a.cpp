#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int t, n;
string s, c;

int main() {_
    cin >> t;
    while(t--) {
        cin >> n >> s;
        c = s;
        sort(c.begin(), c.end());
        int ans = 0;
        for(int i = 0; i < n; i++) {
            ans += c[i] != s[i];
        }

        cout << ans << endl;
    }
}
