#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define INF 0x3f3f3f3f
#define vi vector<int>
#define endl '\n'

using namespace std;

int main() {_ 
    int xa, ya, xb, yb, xc, yc; cin >> xa >> ya >> xb >> yb >> xc >> yc;

    cout << (xa ^ xb ^ xc) << " " << (ya ^ yb ^ yc) << endl;
}