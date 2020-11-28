#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int e[3], x;

int main() {_
    cin >> e[0] >> e[1] >> e[2] >> x;

    if(e[1] - e[0] <= x) {
        cout << e[1] << endl;
    } else if(e[1] - e[0] > x) {
        cout << e[2] << endl;
    }

    return 0;
}