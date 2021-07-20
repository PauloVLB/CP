#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ii pair<int, int>
#define eb emplace_back
#define fs first
#define sc second
#define vi vector<int>
#define vvi vector<vi>
#define vc vector<char>
#define vvc vector<vc>

using namespace std;

int t, n, m;
int d[4] = {1, 0, -1, 0};
vvi vis;
vvc a;

void bfs(int x, int y) {
	queue<ii> q;

	q.emplace(x, y);
	vis[x][y] = 1;

	while(!q.empty()) {
		ii u = q.front(); q.pop();

		for(int k = 0; k < 4; k++) {
			int nx = u.fs+d[k]; int ny = u.sc+d[3-k];

			if((a[nx][ny] == '.' || a[nx][ny] == 'B' || a[nx][ny] == 'G') && !vis[nx][ny]){
				vis[nx][ny] = 1;
				q.emplace(nx, ny);
			}
		}
	}
}

int main() {_
	cin >> t;

	while(t--) {
		cin >> n >> m;
		
		a = vvc(n+5, vc(m+5, 'x'));
		vis = vvi(n+5, vi(m+5));

		vector<ii> bad;
		int good = 0;

		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				cin >> a[i][j];
				if(a[i][j] == 'B') {
					bad.eb(i, j);
				}
			}
		}

		for(auto [x, y] : bad) {
			for(int k = 0; k < 4; k++) {
				int nx = x+d[k]; int ny = y+d[3-k];
				if(a[nx][ny] == '.') {
					a[nx][ny] = '#';
				}
			}
		}
		
		if(a[n][m] != '#') bfs(n, m);

		int foi = 1;

		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= m; j++) {
				if((a[i][j] == 'G' && !vis[i][j]) || (a[i][j] == 'B' && vis[i][j])) {
					// cout << t << "foi nao " << "(" << i << ", " << j << ")" <<  ": " << a[i][j] << " " << vis[i][j] << endl;
					foi = 0;
					break;
				} 
			}
		}

		cout << (foi ? "Yes" : "No") << endl;
	}

    return 0;
}
