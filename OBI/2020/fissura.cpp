#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 505

using namespace std;

int n, f, d[] = {-1, 0, 1, 0};
int vis[MAX][MAX];
char a[MAX][MAX];

void dfs(int i, int  j) {
    vis[i][j] = 1;

    a[i][j] = '*';
    for(int k = 0; k < 4; k++) {
        int b = i + d[k];
        int c = j + d[3-k];

        if(vis[b][c] == -1 && a[b][c] - '0' <= f) {
            dfs(b, c);
        }
    }
}

int main() {_ 
    cin >> n >> f;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> a[i][j];
            vis[i][j] = -1;
        }
    }

    if(a[1][1] - '0' <= f) {
        dfs(1, 1);
    }
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }
}