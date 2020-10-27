#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define ii pair<int,int>
#define fs first
#define sc second
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
using namespace std;

int n, d, distX, distY, alc;
vi vis;
vvi adj;
int x[1005], y[1005];

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

int main(){_ 
    cin >> n >> d;
    vis = vi(n+1, 0);
    adj = vvi(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> x[i] >> y[i]; 
    }
    for(int i = 1; i <= n; i++) {
        for(int j = i+1; j <= n; j++) {
            distX = x[i] - x[j];
            distY = y[i] - y[j];
            if(distX*distX + distY*distY <= d*d) {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }

    bfs(1);

    cout << (alc == n ? 'S' : 'N') << endl;
}