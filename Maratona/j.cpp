#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>
#define int long long
#define fs first
#define sc second

using namespace std;
int w, h, n; 

int eh_borda(int x, int y) {
    return (x == w || y == h || x == 0 || y == 0);
}

int up(int x, int y) {
    return x == 0;
}

int right(int x, int y) {
    return y == h;
}

int bottom(int x, int y) {
    return x == w;
}

int left(int x, int y) {
    return y == 0;
}

int pelo_x(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b) {
    return a.sc.fs < b.sc.fs;
}

int pelo_x_dec(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b) {
    return a.sc.fs > b.sc.fs;
}

int pelo_y(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b) {
    return a.sc.sc < b.sc.sc;
}

int pelo_y_dec(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b) {
    return a.sc.sc > b.sc.sc;
}



int32_t main() {_ 
    cin >> w >> h >> n;

    vector<pair<int, pair<int, int>>> u, r, b, l;
    vector<pair<int, pair<int, int>>> pontos;

    for(int i = 1; i <= n; i++) {
        int xa, ya, xb, yb; cin >> xa >> ya >> xb >> yb;
        if(eh_borda(xa, ya) && eh_borda(xb, yb)) {
            pontos.push_back({i, {xa, ya}});
            pontos.push_back({i, {xb, yb}});                  
        }
    }

    for(auto [id, coord] : pontos) {
        if(up(coord.fs, coord.sc)) u.push_back({id, {coord.fs, coord.sc}});
        else if(right(coord.fs, coord.sc)) r.push_back({id, {coord.fs, coord.sc}});
        else if(left(coord.fs, coord.sc)) l.push_back({id, {coord.fs, coord.sc}});
        else if(bottom(coord.fs, coord.sc)) b.push_back({id, {coord.fs, coord.sc}});
    }

    sort(u.begin(), u.end(), pelo_y);
    sort(r.begin(), r.end(), pelo_x);
    sort(b.begin(), b.end(), pelo_y_dec);
    sort(l.begin(), l.end(), pelo_x_dec);

    vector<int> cores;
    for(auto [id, coord] : u) cores.push_back(id);
    for(auto [id, coord] : r) cores.push_back(id);
    for(auto [id, coord] : b) cores.push_back(id);
    for(auto [id, coord] : l) cores.push_back(id);

    vi ja_vi(n+1, 0);
    stack<int> pilha;

    for(int c : cores) {
        if(!ja_vi[c]) {
            pilha.push(c);
            ja_vi[c] = 1;
        } else {
            if(!pilha.empty() && pilha.top() == c) {
                pilha.pop();
            } else {
                cout << 'N' << endl;
                return 0;
            }
        }
    }

    cout << 'Y' << endl;
}