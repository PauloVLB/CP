#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n, d, m, p;

int main() {_
    cin >> n >> d >> m >> p;

    cout << (m*p > n*d ? "BUFF" : "NERF") << endl;
    return 0;
}