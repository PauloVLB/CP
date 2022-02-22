#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

int main() {_
    int t; cin >> t;

    while(t--) {
        int n, k; 
        string s; 
        cin >> n >> k >> s;
        map<char, int> f;
        for(char c : s) {
            f[c]++;
        }

        int p = 0, o = 0;

        for(auto [k, v] : f) {
            p += v/2;
            o += v%2;
        }

        int ans = 2 * (p/k);
        o += 2 * (p%k);
        cout << ans + (o >= k) << endl;
    }
}