#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAXN 205
#define MAXM 205
#define ii pair<int, int>
#define fs first
#define sc second

using namespace std;

int n, m;
char tab[MAXN][MAXM];

int rps(char x, char y) {
    if(x == y) {    
        return 0;
    } else if((x == 'G' && y == 'C') || (x == 'C' && y == 'P') || (x == 'P' && y == 'G')) {
        return -1;
    } else {
        return 1;
    }
}

bool cmp(ii a, ii b) {
    if(a.fs == b.fs) return a.sc < b.sc;
    return a.fs > b.fs;
}

int main() {
    cin >> n >> m;

    vector<ii> rnk(2*n);

    for(int i = 0; i < 2*n; i++) {
        rnk[i] = {0, i};
    }

    for(int i = 1; i <= 2*n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> tab[i][j];
        }
    }

    for(int i = 1; i <= m; i++) {
        for(int k = 1; k <= n; k++) {
            int idr1 = 2*k - 2;
            int idr2 = 2*k - 1;
            
            char j1 = tab[rnk[idr1].sc+1][i];
            char j2 = tab[rnk[idr2].sc+1][i];

            int result = rps(j1, j2);
            if(result == -1) {
                rnk[idr1].fs++;
            } else if(result == 1) {
                rnk[idr2].fs++;
            }   
        }
        sort(rnk.begin(), rnk.end(), cmp);
    }

    for(int i = 0; i < 2*n; i++) {
        cout << rnk[i].sc+1 << endl;
    }
}