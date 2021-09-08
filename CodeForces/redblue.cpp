#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

int t;

int main() {_ 
    cin >> t;

    while(t--) {
        int n; cin >> n;

        string r, b; cin >> r >> b;
        int qr = 0, qb = 0;
        for(int i = 0; i < n; i++) {
            if(r[i] - '0' > b[i] - '0') qr++;
            if(r[i] - '0' < b[i] - '0') qb++;
        }

        if(qr > qb) cout << "RED" << endl;
        else if(qr < qb) cout << "BLUE" << endl;
        else cout << "EQUAL" << endl;
    }
}