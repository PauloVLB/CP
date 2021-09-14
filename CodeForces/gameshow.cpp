#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

int n, x, s = 100;

int main() {_ 
    cin >> n;
    int ans = 100;
    for(int i = 0; i < n; i++) {
        cin >> x;
        s += x;
        ans = max(ans, s);
    }

    cout << ans << endl;
}