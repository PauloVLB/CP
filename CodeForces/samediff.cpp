#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

long long int t, n, x, ans;
map<int, int> m;

int main() {_ 
    cin >> t;

    while(t--) {
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> x;
            ans += m[x-i];
            m[x-i]++;
        }
        cout << ans << endl;
        m.clear();
        ans = 0;
    }
}