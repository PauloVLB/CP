#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int x, y, ans;

int main() {_
    cin >> x >> y;

    if(x == y) cout << x << endl;
    else {
        cout << 3 - (x+y) << endl;
    }
}