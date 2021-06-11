#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int t, n, a, ima, ime, ma, me = 105, v[4], ans;

int main() {_
    cin >> t;

    while(t--) {
        cin >> n;

        for(int i = 0; i < n; i++) {
            cin >> a;
            if(a > ma) {
                ma = a;
                ima = i;
            }

            if(a < me) {
                me = a;
                ime = i;
            }
        }

        int f = min(n-ime, ime+1);
        int s = min(n-ima, ima+1);

        if(f < s) {
            ans += f;
            ans += min({abs(ime-ima), n-ima, ima+1});
        } else {
            ans += s;
            ans += min({abs(ime-ima), n-ime, ime+1});
        }

        cout << ans << endl;

        ma = -1;
        me = 105;
        ans = 0;
    }
}