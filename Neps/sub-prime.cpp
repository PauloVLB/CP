#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int b, n, d, c, v;
int r[25];
bool ok = true;

int main() {_ 
    while(cin >> b >> n && (b || n)) {
        for(int i = 1; i <= b; i++) {
            cin >> r[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> d >> c >> v;
            r[d] -= v;
            r[c] += v;
        }
        for(int i = 1; i <= b; i++) {
            if(r[i] < 0) {
                ok = false;
                break;
            }
        }
        cout << (ok ? 'S' : 'N') << endl;
        for(int i = 0; i <= b; i++) {
            r[i] = 0;
        }
        ok = true;
    }
}