#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

int main() {_
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> a(n);
        vector<int> f(n+1, 0);

        int consigo = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            int x = a[i];
            while(x) {
                if(x <= n && !f[x]) {
                    consigo++;
                    f[x] = 1;
                    break;
                }
                x /= 2;
            }
        }

        cout << (consigo == n ? "YES" : "NO") << endl;
    }
}