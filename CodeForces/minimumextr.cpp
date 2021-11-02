#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

int t;

int main() {_ 
    cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int sub = a[0];
        int ans = a[0];
        for(int i = 1; i < n; i++) {
            ans = max(ans, a[i] - sub);
            sub += a[i] - sub;
        }

        cout << ans << endl;
    }
}