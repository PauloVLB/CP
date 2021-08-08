#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int t, n;

int main() {_
    cin >> t;

    while(t--) {
        cin >> n;

        int c1 = n/3;
        int c2 = n/3;

        int t = c2*2 + c1;
        if(t == n) {
            cout << c1 << " " << c2 << endl;
        } else {
            if(n-t == 1) {
                cout << c1+1 << " " << c2 << endl;
            } else {
                cout << c1 << " " << c2+1 << endl;
            }
        }
    }
    return 0;
}
