#include <bits/stdc++.h>
 
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX 1005
#define ii pair<int, int>
#define fs first
#define sc second
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
 
using namespace std;
 
char l[MAX][MAX];
int vis[MAX][MAX];
vvi dist(MAX, vi(MAX, INF));
int xbeg, ybeg;
 
ii d[] = { {0, -1}, {1, 0}, {0, 1}, {-1, 0} };
char coord[] = {'L', 'D', 'R', 'U'};
 
void bfs(int xs, int ys) {
    queue<ii> fila;
 
    fila.push({xs, ys});
    vis[xs][ys] = 1;
    dist[xs][ys] = 0;

    while(!fila.empty()) {
        ii curr = fila.front(); fila.pop();
 
        for(int k = 0; k < 4; k++) {
            int newx = curr.fs  + d[k].fs;
            int newy = curr.sc + d[k].sc;
 
            if(l[newx][newy] == '.' && !vis[newx][newy]) {
                vis[newx][newy] = 1;
                dist[newx][newy] = dist[curr.fs][curr.sc] + 1;
                fila.push({newx, newy});
            }
        }
    }
}
 
int main(){_ 
    int r, c; cin >> r >> c;
 
    for(int i = 1; i <= r; i++) {
        for(int j = 1; j <= c; j++) {
            cin >> l[i][j];
            if(l[i][j] == 'E') {
                xbeg = i; ybeg = j;
            }
        }
    }
 
    int q; cin >> q;
    
    bfs(xbeg, ybeg);

    while(q--) {
        int x, y; cin >> x >> y;
        if(l[x][y] == '#') {
            cout << 'W' << endl;
        } else if(l[x][y] == 'X') {
            cout << 'X' << endl;
        } else if(l[x][y] == 'E') {
            cout << 'E' << endl;
        } else {
            if(dist[x][y] == INF) {
                cout << '?' << endl;
            } else {
                int ddist = INF;
                for(int k = 0; k < 4; k++) {
                    int newx = x + d[k].fs;
                    int newy = y + d[k].sc;
                    ddist = min(ddist, dist[newx][newy]);
                }
                for(int k = 0; k < 4; k++) {
                    int newx = x + d[k].fs;
                    int newy = y + d[k].sc;
                    if(dist[newx][newy] == ddist) {
                        cout << coord[k] << endl;
                        break;
                    }
                }
            }
        } 
    }
}