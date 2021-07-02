#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int a, b, c, d, t;
int v[4];

int main() {_
    cin >> t;

    while(t--) {
        cin >> a >> b >> c >> d;
        v[0] = a;
        v[1] = b;
        v[2] = c;
        v[3] = d;

        sort(v, v+4);

        if((max(a, b) == v[3] || max(a, b) == v[2]) && (max(c,d) == v[3] || max(c,d) == v[2])) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
}
