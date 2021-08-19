#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int a, b, c;

int main() {_
    cin >> a >> b >> c;

    int s = max({a,b,c}) + min({a,b,c});
    cout << (a+b+c)-s << '\n';
}
