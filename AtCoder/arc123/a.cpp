#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define int long long

using namespace std;

int a, b, c;

int32_t main() {
    cin >> a >> b >> c;
    int s = 2*b - a - c;

    int qnt = 0;

    if(s < 0) {
        qnt = (1-s)/2;
    }

    cout << s + 3*qnt << endl;
}