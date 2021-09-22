#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

int n, a, d;

int main() {_ 
    cin >> n;
    cin >> a >> d;

    int ans = 0;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        ans += abs(a-x) <= d;
    }
    cout << ans << endl;
}