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
int dk[4] = {0, -1, 0, 1};
int p[MAX][MAX];
vii pin;

void bfs(int x, int y) {
    queue<ii> q;
    q.push({x, y});

    while(!q.empty()) {
        x = q.front().fs;
        y = q.front().sc;
        q.pop();

        if(!p[x][y]) continue;

        p[x][y] = 0;

        for(int k = 0; k < 4; k++) {
            int e = x+dk[k]; int d = y+dk[3-k];
            if(p[e][d] != -1) q.push({e, d});
        }
    }

}


int main() {_ 
    cin >> n >> m;

    for(int i = 0; i <= n+1; i++) {
        for(int j = 0; j <= m+1; j++) {
            if(i == 0 || j == 0 || i == n+1 || j == m+1) p[i][j] = -1;
            else {
                cin >> p[i][j];
                if(p[i][j]) pin.emplace_back(i, j);
            }
        }
    }

    for(auto [i, j] : pin) {
        if(p[i][j]) {
            c++;
            bfs(i, j);
        } 
    }

    cout << c << endl;
}