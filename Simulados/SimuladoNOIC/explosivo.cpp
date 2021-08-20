#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long

using namespace std;

int n, m, q;

int32_t main() {_ 
    cin >> n;

    m = n;
    while(n != 1) {
        if(n%2 == 0) {
            n /= 2;
        } else {
            n = n*3 + 1;
        }
        m = max(m, n);
        q++;
    }

    cout << q << " " << m << endl;
}