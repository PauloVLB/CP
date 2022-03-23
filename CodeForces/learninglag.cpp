#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f

using namespace std;

vector<vector<int>> lng, adj;
vector<int> vis;

void dfs(int u) {
	vis[u] = 1;

	for(int v : adj[u]) {
		if(!vis[v]) {
			dfs(v);
		}
	}
}

int main() {_
	int n, m; cin >> n >> m;
	
	lng = vector<vector<int>>(m+1);
	adj = vector<vector<int>>(n+1);
	vis = vector<int>(n+1, 0);
	
	int qnt_0 = 0;
	for(int i = 1; i <= n; i++) {
		int k; cin >> k;
		qnt_0 += k == 0;

		for(int j = 0; j < k; j++) {
			int l; cin >> l;
			for(int x : lng[l]) {
				adj[i].push_back(x);
				adj[x].push_back(i);
			}
			lng[l].push_back(i);
		}
	}

	if(qnt_0 == n) {
		cout << n << endl;
		return 0;
	}

	int ans = 0;
	for(int i = 1; i <= n; i++) {
		if(!vis[i]) {
			dfs(i);
			ans++;
		}
	}

	cout << ans-1 << endl;
}
