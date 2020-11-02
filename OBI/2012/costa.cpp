#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 1005

using namespace std;

string l;
char g[MAX][MAX];
int n, m, ans;
int aux[4] = {0, 1, 0, -1};

int main() {_ 
    cin >> m >> n;

    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> g[i][j];
        }
    }

    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            if(g[i][j] == '#') {
                for(int k = 0; k < 4; k++) {
                    if(g[i + aux[k]][j + aux[3-k]] != '#') {
                        ans++;
                        break;
                    }                   
                }               
            }
        }
    }

    cout << ans << endl;
}