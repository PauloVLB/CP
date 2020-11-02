#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

string n;
int at, r;

int main() {_
    cin >> n;

    for(char i : n) {
        at = i - '0';
        r = (10*r + at)%11;
    }

    cout << (r ? 'N' : 'S') << endl;

    return 0;
}