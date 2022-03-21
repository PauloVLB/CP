#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>
#define int long long

using namespace std;

int f(int a, int x) {
    return (x/a) + (x%a);
}

int32_t main() {_ 
    int t; cin >> t;

    while(t--) {
        int l, r, a; cin >> l >> r >> a;

        // int ans = -INF;

        // for(int i = l; i <= r; i++) {
        //     ans = max(ans, f(a, i));
        // }

        // cout << ans << endl;
        int maior_div = r - (r%a);

        if(maior_div <= l) {
            cout << f(a, r) << endl;
            continue;
        }

        int ans = max({f(a, maior_div), f(a, maior_div-1), f(a, r)});        
      
        cout << ans << endl;
        //  a a a a a a a a  * a a a a a a a a a a a a a a a a a a a a a a 
    }
}