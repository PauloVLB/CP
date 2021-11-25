#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f
#define MAX 105

using namespace std;

int n, m, q;

char p1[MAX][MAX], p2[MAX][MAX];
char g[MAX][MAX][MAX];
char pp1[MAX][MAX], pp2[MAX][MAX];

void solve(char g[MAX][MAX], char p1[MAX], char p2[MAX]) {
    vector<int> id1, id2;

    for(int i = 0; i < m; i++) {
        if(p1[i] == '1') {
            id1.push_back(i);
        }
    }

    for(int j = 0; j < q; j++) {
        if(p2[j] == '1') {
            id2.push_back(j);
        }
    }

    if(id1.empty() && id2.empty()) return;

    int i = 0, j = 0;

    if(id1.size() < id2.size()) {
        for(int z = 0; z < id2.size() - id1.size(); z++) {
            g[id1[0]][id2[j++]] = 1;
        }
    } else if(id2.size() < id1.size()) {
        for(int z = 0; z < id1.size() - id2.size(); z++) {
            g[id1[i++]][id2[0]] = 1;
        }
    }

    while(i < id1.size() && j < id2.size()) {
        g[id1[i]][id2[j]] = 1;
        i++, j++;
    }
}

int main() {_ 
    cin >> n >> m >> q;

    for(int i = 0; i < n; i++) {
        cin >> p1[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> p2[i];
    }

    memset(g, 1, sizeof g);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(p1[i][j] == '0') {
                for(int k = 0; k < q; k++) {
                    g[i][j][k] = 0;
                }
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int k = 0; k < q; k++) {
            if(p2[i][k] == '0') {
                for(int j = 0; j < m; j++) {
                    g[i][j][k] = 0;
                }
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            pp1[i][j] = '0';
        }
    }

    for(int i = 0; i < n; i++) {
        for(int k = 0; k < q; k++) {
            pp2[i][k] = '0';
        }
    }

    int cnt = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            for(int k = 0; k < q; k++) {
                if(g[i][j][k]) {
                    cnt++;
                    pp1[i][j] = pp2[i][k] = '1';
                }
            }
        }
    }

    if(memcmp(p1, pp1, sizeof p1) or memcmp(p2, pp2, sizeof p2)) {
        cout << "-1" << endl;
        return 0;
    }

    cout << cnt << endl;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            for(int k = 0; k < q; k++) {
                if(g[i][j][k]) {
                    cout << i  << " " << j << " " << k << endl;
                }
            }
        }
    }

    memset(g, 0, sizeof g);

    for(int i = 0; i < n; i++) {
        solve(g[i], p1[i], p2[i]);
    }

    cnt = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            for(int k = 0; k < q; k++) {
                if(g[i][j][k]) {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            for(int k = 0; k < q; k++) {
                if(g[i][j][k]) {
                    cout << i  << " " << j << " " << k << endl;
                }
            }
        }
    }
}