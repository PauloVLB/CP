#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int t;

int main() {_
    cin >> t;

    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s; cin >> s;
        if(b >= 0) {
            cout << n * (a+b) << endl;
            continue;
        }

        vector<int> q(2, 0);
        s += '3';
        for(int i = 1; i <= n; i++) {
            if(s[i] != s[i-1]) {
                q[s[i-1]-'0']++;
            }
        }
        // q[s[n-1]-'0']++;
        cout << b * (min(q[0], q[1]) + 1) + a*n << endl;
    }
    return 0;
}
