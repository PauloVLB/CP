#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 1005
#define ii pair<int,int>
#define fs first
#define sc second

using namespace std;

int n, m, iniX, iniY, fimX, fimY;
int t[MAX][MAX], dist[MAX][MAX];

int d[4] = {0, 1, 0, -1};
int ans;

void bfs(int sX, int sY) {
    queue<ii> fila;
    fila.push({sX, sY});    
    dist[sX][sY] = 0;

    while(!fila.empty()) {
        ii u = fila.front(); fila.pop();

        for(int i = 0; i < 4; i++) {
            int a = u.fs + d[i]; 
            int b = u.sc + d[3-i];
            int x = t[a][b];
            if(x) {
                fila.push({a, b});
                t[a][b] = 0;
                dist[a][b] = dist[u.fs][u.sc] + 1;
            }   
        }
    }
} 

int main() {_ 
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> t[i][j];
            if(t[i][j] == 3) {
                iniX = i;
                iniY = j;
            } 
            if(t[i][j] == 2) {
                fimX = i;
                fimY = j;
            }
        }
    }

    bfs(iniX, iniY);

    cout << dist[fimX][fimY] + 1 << endl;
      
}