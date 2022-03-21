#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define INF 0x3f3f3f3f
#define vi vector<int>
#define endl '\n'

using namespace std;

int main() {_ 
	int n, m; cin >> n >> m;
	
	vi v(m);
	for(int i = 0; i < m; i++){
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int menor = INF;
	for(int i = 0; i <= m - n; i++) {
		menor = min(menor, v[n + i - 1] - v[i]);
	}

	cout << menor << endl;
}

