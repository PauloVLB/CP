#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 100005

using namespace std;

int n, m, c, a, d, ans;
int p[MAX], ja[MAX]; // p[x] = se tiver tocando X, troca pra p[X] 
int da = 1;

int main() {_
    cin >> n >> m >> c;

    for(int i = 1; i <= n; i++) {
        cin >> a >> d;
        if(p[d] == 0) {
            p[d] = a;
        }
    }   

    while(p[c] != 0) {
        if(ja[c]) {
            da = 0;
            break;
        }
        ja[c] = 1;
        c = p[c];
        ans++;
    }

    if(da) cout << ans << endl;
    else cout << -1 << endl;

}