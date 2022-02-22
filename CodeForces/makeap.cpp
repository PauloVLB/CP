#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

int main() {_
    int t; cin >> t;

    while(t--) {
        int a, b, c; cin >> a >> b >> c;
        int aa = b - (c - b);
        if(aa >= a && aa % a == 0 && aa) {
            cout << "YES" << endl;
            continue;
        }

        int bb = a + (c - a)/2;
        if(bb >= b && (c-a)%2 == 0 && bb % b == 0 && bb) {
            cout << "YES" << endl;
            continue;
        }

        int cc = a + 2*(b - a);
        if(cc >= c && cc % c == 0 && cc) {
            cout << "YES" << endl;
            continue;
        }

        cout << "NO" << endl;
    }
}