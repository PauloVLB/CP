#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define MOD (int) (1e9 + 7)
#define i64 long long

using namespace std;

string s;
i64 ans, m = 1, c;

int main() {_
    while(cin >> s) {
        for(int i = s.size()-1; i >= 0; i--) {
            c = s[i] - 'A';
            ans = (ans + c * m % MOD + MOD)% MOD;
            m = (m * 26) % MOD; 
        }
        cout << ans << endl;
        ans = 0; m = 1; c = 0;
    }

    return 0;
}