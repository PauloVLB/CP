#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

int n, p;

int main() {_ 
    cin >> n >> p;
    int ans = 0;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        ans += x < p;
    }

    cout << ans << endl;
}