#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int l, c;

int main() {_ 
    cin >> l >> c;

    cout << ((l*c) + (l-1)*(c-1)) << endl;
    cout << ((l-1)*2 + (c-1)*2) << endl;
}