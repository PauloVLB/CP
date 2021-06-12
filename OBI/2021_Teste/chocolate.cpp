#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n, xa, ya, xb, yb;
char ans;

int main() {_ 
    cin >> n >> xa >> ya >> xb >> yb;

    if((xa <= n/2 && xb > n/2) || (xb <= n/2 && xa > n/2)) {
        ans = 'S';
    } else if((ya <= n/2 && yb > n/2) || (yb <= n/2 && ya > n/2)) {
        ans = 'S';
    } else  {
        ans = 'N';
    }

    cout << ans << endl;
}