#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

int t;

int main() {_ 
    cin >> t;

    while(t--) {
        string s; cin >> s;

        int a = 0, b = 0, c = 0;
        for(char x : s) {
            a += x == 'A';
            b += x == 'B';
            c += x == 'C';
        }

        b -= a;
        a = 0;
        c -= b;
        b = 0;

        if(!a && !b && !c) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}