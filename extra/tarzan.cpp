#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define ii pair<int, int>
#define fs first
#define sc second
#define vi vector<int>
#define vii vector<ii>
#define vvi vector<vi>

using namespace std;

int n, d, x, y, distX, distY, alc;
vvi adj;
vii coord;
vi vis;

void bfs(int s) {
    queue<int> fila;
    fila.push(s);
    vis[s] = 1;

    while(!fila.empty()) {
        int u = fila.front(); fila.pop();

        alc++;

        for(int v : adj[u]) {
            if(!vis[v]) {
                fila.push(v);
                vis[v] = 1;
            }
        }

    }
}

int main() {_ 
    cin >> n >> d;
    adj = vvi(n);
    vis = vi(n);
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        coord.push_back({x, y});      
    }

    for(int u = 0; u < n; u++) {
        for(int v = u+1; v < n; v++) {
            distX = coord[u].fs - coord[v].fs;
            distY = coord[u].sc - coord[v].sc;

            if(distX*distX + distY*distY <= d*d) {
                adj[u].push_back(v);
                adj[v].push_back(u);
            }
        }
    }

    bfs(0);

    cout << (alc == n ? 'S' : 'N') << endl;   
}