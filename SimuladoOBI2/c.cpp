#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n, p, x, y, ans;

int main() {_
    cin >> n >> p;

    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        if(x+y >= p) ans++;
    }

    cout << ans << endl;
}