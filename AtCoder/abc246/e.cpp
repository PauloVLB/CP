#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define INF 0x3f3f3f3f
#define vi vector<int>
#define endl '\n'
#define fs first
#define sc second
//#define int long long

using namespace std;

void print(vector<int> a) {
    cout << "[ ";

    for(int x : a) {
        cout << x << " ";
    }

    cout << "]\n";
}

vector<vector<char>> m;
vector<vector<int>> dist;
int n;

vector<pair<int, int>> dir = {
    {-1, -1}, {1, 1}, {-1, 1}, {1, -1}
};

int pode(int x, int y) {
    return (x >= 0 && y >= 0 && y < n && x < n && (m[x][y] != '#'));
}

int bfs(int xs, int ys) {
    queue<pair<int, int>> q;

    q.push({xs, ys});
    dist[xs][ys] = 0;

    set<tuple<int, int, int, int>> ja_foi;
    int ans = 0;
    while(!q.empty()) {
        auto f = q.front(); q.pop();

        if(m[f.fs][f.sc] == 'T') {
            return dist[f.fs][f.sc];
        }

        for(auto d : dir) {
            int nx = f.fs + d.fs;
            int ny = f.sc + d.sc;
            while(pode(nx, ny) && ja_foi.emplace(nx, ny, d.fs, d.sc).sc) {
                if(dist[nx][ny] == INF) {
                    dist[nx][ny] = dist[f.fs][f.sc] + 1;
                    q.push({nx, ny});
                }
                nx += d.fs;
                ny += d.sc;
            }
        }
    }
    
    // (0, 0) (0, 1) (0, 2)
    // (1, 0) (1, 1) (1, 2)
    // (2, 0) (2, 1) (2, 2)

    return -1;
}

int32_t main() {_ 
    cin >> n;

    m = vector<vector<char>>(n, vector<char>(n));
    dist = vector<vector<int>>(n, vector<int>(n, INF));

    int xa, ya; cin >> xa >> ya; xa--; ya--;
    int xb, yb; cin >> xb >> yb; xb--; yb--;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> m[i][j];
            if(i == xb && j == yb) {
                m[i][j] = 'T';
            }
        }
    }

    set<pair<int, int>> s;


    cout << bfs(xa, ya) << endl;
}