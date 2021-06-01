#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define ii pair<int, int>
#define fs first
#define sc second
#define vii vector<ii>
#define vi vector<int>
#define vvi vector<vi>
#define MAX 1005

using namespace std;

int n, m, x, c;
int d[] = {-1, 0, 1, 0};
int p[MAX][MAX];

void dfs(int i, int j) {
    p[i][j] = 0;

    for(int k = 0; k < 4; k++) {
        int a = i + d[k];
        int b = j + d[3-k];

        if(p[a][b]) {
            dfs(a, b);
        }
    }
}


int main() {_ 
    cin >> n >> m;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> p[i][j];
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(p[i][j]) {
                dfs(i, j);
                c++;
            }
        }
    }

    cout << c << endl;
}