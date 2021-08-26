#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

int v[4];

int main() {_ 
    for(int i = 0; i < 4; i++) {
        cin >> v[i];
    }

    sort(v, v+4);

    cout << abs((v[3]+v[0]) - (v[2]+v[1])) << endl;
}