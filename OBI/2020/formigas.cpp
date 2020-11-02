#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie();
#define MAX 205

using namespace std;

int n, m;
int u, v, w, ini, ans;
int dist[MAX][MAX], h[MAX];

int main(){_
    cin >> n >> m >> ini;

    for(int i = 1; i <= n; i++) {
        cin >> h[i];
    }

    while(m--){
        cin >> u >> v;
        if(h[u] > h[v]) {
            dist[u][v] = 1;
        } else if (h[u] != h[v]) {
            dist[v][u] = 1;
        }
    }

    for (int k=1; k<=n; k++){
        for (int i=1; i<=n; i++){
            for (int j=1; j<=n; j++){
                if (dist[i][k] != 0 && dist[k][j] != 0) {
                    dist[i][j] = max(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    for (int j=1; j<=n; j++){
        ans = max(ans, dist[ini][j]);
    }
    cout << ans << endl;
    return 0;
}