#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);

using namespace std;

int t, n, s, x;

int main () {_ 
    cin >> t;

    while(t--) {
        cin >> n;

        for(int i = 0; i < n; i++) {
            cin >> x;
            s += x;
        }

        if(s <= n) {
            cout << (s != n) << endl;
        } else {
            cout << s-n << endl;
        }        

        s = 0;
    }
}