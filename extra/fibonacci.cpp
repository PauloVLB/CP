#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int f[15], n;

int main() {_

    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i < 15; i++) {
        f[i] = f[i-1] + f[i-2];
    }

    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << f[i] << ' ';
    }
    cout << endl;

    return 0;
}