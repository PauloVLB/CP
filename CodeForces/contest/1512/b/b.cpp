#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ii pair<int, int>
#define fs first
#define sc second
#define eb emplace_back
using namespace std;

int t, n, x;

bool pode(int x, int y) {
    return (x < n && x >= 0 && y < n && y >= 0);
}

int main() {_

    cin >> t;

    while(t--) {
        cin >> n;
        char f[n][n];
        vector<ii> ast;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> f[i][j];
                if(f[i][j] == '*') ast.eb(i, j);
            }
        }

        if(ast[0].fs != ast[1].fs && ast[0].sc !=  ast[1].sc) {
            ast.eb(ast[0].fs, ast[1].sc);
            ast.eb(ast[1].fs, ast[0].sc);      
        } else if(ast[0].fs == ast[1].fs) {
            if(pode(ast[0].fs+1, ast[0].sc)) {
                ast.eb(ast[0].fs+1, ast[0].sc);
            } else {
                ast.eb(ast[0].fs-1, ast[0].sc);
            }

            if(pode(ast[1].fs+1, ast[1].sc)) {
                ast.eb(ast[1].fs+1, ast[1].sc);
            } else {
                ast.eb(ast[1].fs-1, ast[1].sc);
            }
        } else if(ast[0].sc == ast[1].sc) {
            if(pode(ast[0].fs, ast[0].sc+1)) {
                ast.eb(ast[0].fs, ast[0].sc+1);
            } else {
                ast.eb(ast[0].fs, ast[0].sc-1);
            }

            if(pode(ast[1].fs, ast[1].sc+1)) {
                ast.eb(ast[1].fs, ast[1].sc+1);
            } else {
                ast.eb(ast[1].fs, ast[1].sc-1);
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                char ans = '.';
                for(auto [x, y] : ast) {
                    if(i == x && y == j) ans = '*';
                }
                cout << ans;
            }
            cout << endl;
        }
        // cout << endl;
    }
    return 0;
}
