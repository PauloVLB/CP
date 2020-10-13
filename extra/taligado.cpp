#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 100005

using namespace std;

int n, m, t, a, b;
vector<int> g[MAX];

int main() {_
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        cin >> t >> a >> b;

        if(t == 0) {
            bool x = find(g[a].begin(), g[a].end(), b) != g[a].end();
            bool y = find(g[b].begin(), g[b].end(), a) != g[b].end();
            cout << (x || y) << endl;
        } else {
            g[a].push_back(b);
            g[b].push_back(a);
        }    
    }
    cout << endl;
}