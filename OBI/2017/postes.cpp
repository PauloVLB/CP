#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n, x, c, s;

int main() {_
    cin >> n;

    while(n--) {
        cin >> x;
        if(x < 85 && x >= 50) c++;
        if(x < 50) s++;
    }

    cout << s << " " << c << endl;
}