#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ii pair<int, int>
#define fs first
#define sc second
#define ll long long
using namespace std;

int t, n, x;

int main() {_
    cin >> t;

    while(t--) {
        cin >> n;
        vector<ll> v(n+1);
        ll ans = 0;

        for(int i = 1; i <= n; i++) {
            cin >> v[i];
        }

        for(int i = 1; i <= n; i++) {
            for(int j = v[i]-i; j <= n; j += v[i]) {
                if(j > i &&  v[i] * v[j] == i + j) {
                    ans++;
                }
            }
        } 

        cout << ans << endl;
    }
}
