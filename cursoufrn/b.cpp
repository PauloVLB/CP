#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;


bool invalid(int x, int y) {
    return (x < 1 || x > 10 || y > 10 || y < 1);
}

int n;
int m[15][15];

int main() {_ 
    cin >> n;

    while(n--) {
        int l, r, c, d; cin >> d >> l >> r >> c;

        for(int j = 0; j < l; j++) {
            int xx = r+j*d;
            int yy = c+j*(!d);

            if(invalid(xx, yy) || m[xx][yy]) {
                cout << 'N' << endl;
                return 0;
            }

            m[xx][yy]++;
        }
    }
    cout << 'Y' << endl;

}