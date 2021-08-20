#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

int v[3];

int main() {_ 
    cin >> v[0] >> v[1] >> v[2];

    sort(v, v+3);

    cout << v[1] << endl;
}