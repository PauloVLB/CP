#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int a, v, x, y, t;

int main() {_
    while(cin >> a >> v && (a || v)) {
        int maior = 0;
        vector<int> g[101];
        vector<int> ans;
        for(int i = 1; i <= v; i++) {
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
            int tx = g[x].size();
            int ty = g[y].size();
            maior = max({tx, ty, maior});
        }

        
        for(int i = 1; i <= a; i++) {
            if(g[i].size() == maior) {
                ans.push_back(i);
            }
        }
        cout << "Teste " << ++t << endl;
        for(int i = 0; i < ans.size(); i++) {
            cout << (i == 0 ? "" : " ") << ans[i];
        }
        cout << endl << endl;
    }

}