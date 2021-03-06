#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int g[5][5] {
    {0, 1, 1, 0, 0},
    {0, 0, 1, 1, 0},
    {0, 0, 0, 1, 1},
    {1, 0, 0, 0, 1},
    {1, 1, 0, 0, 0},
};
int n, d, x, qd, qx;

int main() {_
    cin >> n;

    while(n--) {
        cin >> d >> x;
        if(g[d][x]) qd++;
        if(g[x][d]) qx++; 
    }

    cout << (qd > qx ? "dario" : "xerxes") << endl;
}
