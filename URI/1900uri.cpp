#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i64 long long
#define vi vector<i64>

using namespace std;

i64 n, s, xi, ans;
map<i64, i64> f;

int main() {_
    cin >> n;
    f[0] = 1;
    for(int i = 0; i < n; i++) {
        cin >> xi;
        s += xi;
        ans += f[s];
        ++f[s];
    }

    cout << ans << endl;


    return 0;
}