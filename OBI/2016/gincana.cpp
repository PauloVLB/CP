#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define i64 long long

using namespace std;

i64 a, b;

int main() {_
    cin >> a >> b;

    while(__gcd(a, b) != 1) b--;
    cout << b << endl;
}
