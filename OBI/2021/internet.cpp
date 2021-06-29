#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int x, n, m, q;

int main() {_ 
    cin >> x >> n;
    q = x;
    for(int i = 0; i < n; i++) {
        cin >> m;
        q -= m;
        q += x;
    }

    cout << q << endl;
}