#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

int n;
int m[11][11];

bool invalid(int x, int y) {
    return (x > 10 || x < 1 || y > 10 || y < 1);
}

int main() {_ 
    cin >> n;

    for(int i = 0; i < n; i++) {
        int d, l, r, c; cin >> d >> l >> r >> c;

        if(d) { // vertical
            for(int j = 0; j < l; j++) {
                if(invalid(r+j, c) || m[r+j][c]) {
                    cout << 'N' << endl;
                    return 0;
                }
                m[r+j][c]++;
            }
        } else { // honrizontal
            for(int j = 0; j < l; j++) {
                if(invalid(r, c+j) || m[r][c+j]) {
                    cout << 'N' << endl;
                    return 0;
                }
                m[r][c+j]++;
            }
        }
    }

    cout << 'Y' << endl;
}