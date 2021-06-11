#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 1005
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

using namespace std;

int n, k, u, ci, ui;
int c[MAX][MAX];
int m[MAX];
vi v;
int w;

int main() {_
    cin >> n >> k >> u;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= k; j++){
            cin >> ci;
            c[i][ci] = 1;
        }
    }

    for(int i = 1; i <= u; i++) {
        cin >> ui;
        for(int j = 1; j <= n; j++) {
            if(c[j][ui]) {
                m[j]++;
                if(m[j] == k) {
                    v.pb(j);
                    w = 1;
                }
            }           
        }

        if(w) break;
    }

    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;
}