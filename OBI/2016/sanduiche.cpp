#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define i64 long long

using namespace std;

map<i64, i64> f;
i64 s, t;
int n, d, xi, ans, v[1000005], inv;

int main() {_ 
    cin >> n >> d;
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        t += v[i];       
    }

    f[0] = 1;

    for(int i = 0; i < n; i++) {
        s += v[i];
        ans += f[s-d];
        f[s]++;

        inv = s-(t-d);
        if(inv != 0 && i < n - 1) {
            ans += f[inv];
        }
    }

    cout << ans << endl;
}