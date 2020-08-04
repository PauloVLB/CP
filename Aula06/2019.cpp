#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i64 long long
#define MOD 2019

using namespace std;

int t, d;
i64 s, ans;
string n;
map<i64, i64> f;

int main() {_
    cin >> n;
    t = n.size();

    f[0] = 1;

    for(int i = 0; i < t; i++) {
        d = n[i] - '0';
        s = (s*10 + d)%MOD;
        ans += f[s];
        ++f[s];
    }

    cout << ans << endl;

    return 0;
}
