#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n, ans;

int main() {_

    cin >> n;

    while(n > 1) {
        if(n%2 == 0) {
            n /= 2;
        } else {
            n = 3*n+1;
        }
        ans++;
    }

    cout << ans << endl;

    return 0;
}
