#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

int main() {_ 
    char a, b, c, d;
    cin >> a >> b >> c >> d;

    if((a == d && d == '.') || (c == b && b == '.')) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}