#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

int a, b, c, d, e, f;

int main() {_   
    cin >> a >> b >> c >> d >> e >> f;

    if(a*3 + b*2 + c > d*3 + e*2 + f) {
        cout << 'A' << endl;
    } else if(a*3 + b*2 + c < d*3 + e*2 + f) {
        cout << 'B' << endl;
    } else {
        cout << 'T' << endl;
    }
}