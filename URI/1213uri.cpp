#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n, ans, ini = 1;

int main() {_
    while(cin >> n) {
        while(ini % n) {
            ini = (ini * 10 + 1) % n;
            ans++;
        }
        cout << ans + 1 << endl;
        ans = 0; ini = 1; 
    }

    return 0;
}