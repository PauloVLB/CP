#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int l, m;

int main() {_
    cin >> l >> m;

    cout << (l*0.3 >= m ? floor(l*0.3) : 0) << endl;

}