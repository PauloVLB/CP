#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n, t, p, m, c[3];

int main() {_ 
    cin >> n;

    while(n--) {
        cin >> t;
        c[t]++;
    }

    cin >> p >> m;

    cout << (p == c[1] && m == c[2] ? 'S' : 'N') << endl;
}