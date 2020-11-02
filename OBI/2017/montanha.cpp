#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int f[1005], n;
char ans = 'N';

int main() {_
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> f[i];
    }

    for(int i = 2; i < n; i++) {
        if(f[i-1] > f[i] && f[i] < f[i+1]) ans = 'S';
    }

    cout << ans << endl;

    return 0;
}
