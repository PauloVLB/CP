#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define MAX 305
#define INF 0x3f3f3f3f

using namespace std;

int memo[MAX][MAX][MAX];
int a[MAX], b[MAX];
int n;

int dp(int id, int x, int y) {
    if(x <= 0 && y <= 0) return 0;
    if(id == n) return INF;

    x = max(0, x);
    y = max(0, y);

    if(memo[id][x][y] != -1) return memo[id][x][y];

    return memo[id][x][y] = min(dp(id+1, x - a[id], y - b[id])+1, dp(id+1, x, y));
}

int main() {_ 
    for(int i = 0; i < MAX; i++) {
        for(int j = 0; j < MAX; j++) {
            for(int k = 0; k < MAX; k++) {
                memo[i][j][k] = -1;
            }
        }
    }
    int x, y; cin >> n >> x >> y;

    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }    

    int ans = dp(0, x, y);
    cout <<  (ans >= INF ? -1 : ans)  << endl;
}