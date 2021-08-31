#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

using namespace std;

int n, m, x, y;

int main() {_ 
    cin >> n >> m;

    vector<int> can(1 << n, 1);
    
    for(int i = 0; i < m; i++) {
        cin >> x >> y; x--, y--;
        can[(1 << x) | (1 << y)] = 0;
    } 

    for(int mask = 1; mask < 1 << n; mask++) {
        for(int i = 0; i < n; i++) {
            if(mask & 1 << i) {
                can[mask] = min(can[mask], can[mask ^ (1 << i)]);
            }
        }
    }

    cout << accumulate(can.begin(), can.end(), 0)-1 << endl;
}