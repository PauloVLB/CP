#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int t;
string s;
int main() {_
    cin >> t;

    while(t--) {
        cin >> s;

        map<char, int> f;

        for(int i = 0; i < s.size(); i++) {
            f[s[i]]++;
        }

        int ans = 0;
        int t = 0;
        for(auto [k, v] : f) {
            if(v <= 2) ans += v;
            else {
                ans += 2;
            }
        }

        cout << ans/2 << endl;
    }
    return 0;
}
