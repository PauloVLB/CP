#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

int t, n, xa, xb, ya, yb, xf, yf;

int main() {_
    cin >> t;

    while(t--) {
        cin >> xa >> ya >> xb >> yb >> xf >> yf;
        int ans = abs(xa - xb) + abs(yb - ya);  

        if((xa == xb && xb == xf) && yf > min(ya, yb) && yf < max(ya, yb)) ans += 2;
        if((ya == yb && yb == yf) && xf > min(xa, xb) && xf < max(xa, xb)) ans += 2;

        cout << ans << endl;
    }
}
