#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n, m, k, v;

vector<vector<int>> f;

int main() {
    while(cin >> n >> m) {
        f = vector<vector<int>>(1000005);
        for(int i = 1; i <= n; i++) {
            int a;
            cin >> a;
            f[a].push_back(i);       
        }
        for(int i = 0; i < m; i++) {
            cin >> k >> v;
            if(k > f[v].size()) cout << 0 << endl;
            else cout << f[v][k - 1] << endl;
        }   
    }
}
