#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int> 
#define int long long

using namespace std;

int32_t main() {_ 
    int v; cin >> v;
    int f = 0;

    for(int i = 2; i * i <= v; i++) {
        if(v%i == 0) {
            f = 1; break;
        }
    }

    if(f) {
        int ans = 1e18;
        for(int i = 1; i <= v; i++) {
            if(v%i == 0) {
                int qnt = v/i;
                for(int j = 1; j <= qnt; j++) {
                    if(qnt%j==0) {
                        int qnt2 = qnt/j;

                        int area = i * qnt2 + i * j + j * qnt2;
                        area *= 2;

                        ans = min(ans, area);
                    }
                }
            }
        }
        cout << ans << endl;
    } else {
        cout << v * 4 + 2 << endl;
    }
}