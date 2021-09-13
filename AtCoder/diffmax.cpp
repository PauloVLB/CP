#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

int a, b, c, d;

int main() {_ 
    cin >> a >> b >> c >> d;

    cout << (max(a, b) - min(c, d)) << endl;
}