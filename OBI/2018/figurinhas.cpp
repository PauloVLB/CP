#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n, c, m, x, y, ja;
int v[105], r[105];

int main() {_ 
    cin >> n >> c >> m;

    for(int i = 0; i < c; i++) {
        cin >> x;
        v[x] = 1;
    }

    for(int i = 0; i < m; i++) {
        cin >> y;
        if(v[y] && !r[y]) ja++;
        r[y]++;
    }
    cout << c - ja << endl;
}