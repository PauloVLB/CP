#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n, a, s, r;
int f[1005], ans;
int main() {_
    cin >> n;
    r = n;
    while(n--) {
        cin >> a;
        if(a >= 1 && a <= r && f[a] == 0) {
            f[a]++;
            ans++;
        }
    }

    cout << (ans == r ? "Yes" : "No") << endl;
}